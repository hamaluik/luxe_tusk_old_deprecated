var exec = require('child_process').exec;

exports.hook = function(flow, done) {
	exec('haxe test.hxml', function(error, stdout, stderr) {
		if(error) {
			console.log(stdout);
			process.exit(1);
		}
		console.log(stdout);
		done();
	});
}