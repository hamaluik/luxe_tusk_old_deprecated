import {{project.app.main}};

import tusk.Log.*;
import snow.Snow;
import snow.types.Types.SnowConfig;

class TuskApp {
	public static function main() {
		var snow:Snow = new Snow();
		
		var snowConfig:SnowConfig = {
			has_loop: true,
			config_path: '',
			app_package: '{{toString project.app.package}}'
		};
		
		// initialize!
		logInfo('initializing game...');
		try {
			snow.init(snowConfig, new {{project.app.main}}());
		}
		catch(exception:tusk.Exception) {
			logError(exception);
		}
	}
}