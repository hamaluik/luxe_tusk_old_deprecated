package tusk.macros;

// adapted from https://github.com/underscorediscovery/luxe/blob/cdb3001a59a706aa0819741d66c55b497b96dfa2/luxe/macros/BuildVersion.hx

import haxe.macro.Expr;
import haxe.macro.Context;
import haxe.macro.Compiler;

#if macro
import haxe.io.Path;
import sys.io.File;
import sys.FileSystem;
#end

@:noCompletion
class Version {
	macro public static function current():ExprOf<String> {
		// get the base directory
		var location:String = Context.getPosInfos(Context.currentPos()).file;
		var root:String = Path.normalize(Path.directory(location) + '/../..');
		var versionPath:String = Path.join([root, 'VERSION']);
		var gitHeadPath:String = Path.join([root, '.git', 'refs', 'heads', 'master']);
		
		// load the version file
		var version:String = 'unknown';
		if(FileSystem.exists(versionPath)) {
			version = File.getContent(versionPath);
		}
		
		// add the git commit
		if(FileSystem.exists(gitHeadPath)) {
			var commit:String = File.getContent(gitHeadPath);
			version += '+' + commit.substring(0, 6);
		}

		Compiler.define('version', version);
		Sys.println('\033[0;36mtŭsk / build - version: \033[1;37m' + version + '\033[0;37m');
		return Context.makeExpr(version, Context.currentPos());
	}
}