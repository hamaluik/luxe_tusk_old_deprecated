// import modules
fs = require('fs');

// alert the user
console.log("> Updating VERSION...");

// read the version file
fs.readFile('VERSION', 'utf8', function(err, ver) {
	if(err) {
		if(err.code === 'ENOENT') {
			// the VERSION file didn't exist!
			// we must create it!
			var cp = require('child_process');
			var results = cp.execSync('git tag').toString().trim().split('\n');
			if(results.length < 1) {
				return console.log(err);
			}
			ver = results[0].substr(1).trim() + "+0";
		}
		else {
			return console.log(err);
		}
	}
	
	// get the shorthand for the commit
	var commit = process.argv[2].substring(0, 6);
	
	// use a regular expression to get the components
	var re = /^(\d+)\.(\d+)\.(\d+)(-\w+)?(\+?.*)$/g;
	var m = re.exec(ver);
	
	// build the new version string
	var newVer = m[1] + "."
	           + m[2] + "."
	           + m[3]
	           + m[4]
	           + "+" + commit;
	
	fs.writeFile('VERSION', newVer, function(err) {
		if(err) {
			return console.log(err);
		}
		console.log("> Done!");
	})
});