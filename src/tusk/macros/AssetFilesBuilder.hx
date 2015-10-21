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
        var fileRefs:Array<FileRef> = recurseReadFiles(dir, dir);

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
    private static function recurseReadFiles(baseDir:String, file:String):Array<FileRef> {
        var fileRefs:Array<FileRef> = new Array<FileRef>();
        if(FileSystem.isDirectory(file)) {
            for(fileName in FileSystem.readDirectory(file)) {
                fileRefs = fileRefs.concat(recurseReadFiles(baseDir, file + "/" + fileName));
            }
            return fileRefs;
        }
        else {
            fileRefs.push(new FileRef(baseDir, file));
            return fileRefs;
        }
    }
    #end
}

private class FileRef {
    public var name:String;
    public var value:String;
    public var documentation:String;

    public function new(baseDir:String, value:String) {
        //trace("Added file: " + value);
        this.value = value;
        // clear out invalid characters
        this.name = value.substr(baseDir.length + 1).split("/").join("___").split("-").join("_").split(".").join("__");
        // generate documentation
        this.documentation = "Reference to file '" + value + "' (auto)";
    }
}