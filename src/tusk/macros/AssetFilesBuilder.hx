package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;
#if !docgen
import sys.FileSystem;
#end

/**
 * For code-completion of asset files in the project
 *
 * @see http://blog.stroep.nl/2014/01/haxe-macros/
 */
@:noCompletion class AssetFilesBuilder {
    macro public static function build(dir:String):Array<Field> {
        var fields = Context.getBuildFields();

        #if !docgen
        // get all the files in the folder
        var fileRefs:Array<FileRef> = recurseReadFiles(dir, dir, new Array<FileRef>());

        // add the fields to the class
        for(fileRef in fileRefs) {
            fields.push({
                name: fileRef.name,
                doc: fileRef.documentation,
                access: [Access.APublic, Access.AStatic, Access.AInline],
                pos: Context.currentPos(),
                kind: FieldType.FVar(macro: String, macro $v{fileRef.value})
            });
        }

        #end
        return fields;
    }

    #if !docgen
    private static function recurseReadFiles(baseDir:String, dir:String, fileRefs:Array<FileRef>):Array<FileRef> {
        var fileNames:Array<String> = FileSystem.readDirectory(dir);
        for(fileName in fileNames) {
            if(!FileSystem.isDirectory(dir + fileName)) {
                fileRefs.push(new FileRef(baseDir, dir + fileName));
            }
            else {
                fileRefs = fileRefs.concat(recurseReadFiles(baseDir, dir + fileName + "/", fileRefs));
            }
        }
        return fileRefs;
    }
    #end
}

private class FileRef {
    public var name:String;
    public var value:String;
    public var documentation:String;

    public function new(baseDir:String, value:String) {
        this.value = value;
        // clear out invalid characters
        this.name = value.substr(baseDir.length).split("/").join("___").split("-").join("_").split(".").join("__");
        // generate documentation
        this.documentation = "Reference to file '" + value + "' (auto)";
    }
}