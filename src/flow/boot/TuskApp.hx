import {{project.app.main}};

import tusk.Tusk;
import tusk.debug.Exception;
import tusk.debug.Log;
import snow.Snow;
import snow.types.Types.SnowConfig;

class TuskApp {
	public static function main() {
		var snow:Snow = new Snow();
		
		var hasLoop:Bool = true;
		#if (docgen || testing)
		hasLoop = false;
		#end
		var snowConfig:SnowConfig = {
			has_loop: hasLoop,
			app_package: '{{toString project.app.package}}'
		};
		
		// initialize!
        Log.info('Starting tŭsk ' + Tusk.version);
		try {
			snow.init(snowConfig, new Tusk(new {{project.app.main}}()));
		}
		catch(exception:Exception) {
			if(exception.fatal) {
				Log.fatal(exception.message);
			}
			else {
				Log.error(exception);
			}
		}
	}
}