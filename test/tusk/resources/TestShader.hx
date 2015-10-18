package tusk.resources;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestShader extends BuddySuite {
	public function new() {
		describe('Using shaders', {
			it('should allow you to load shader sources in the constructor');
			it('should allow you to set shader sources after construction');
			it('should allow you to compile shaders');
			it('should prevent you from compiling shaders if one or more of the sources are missing');
			it('should allow you to get the locations of attributes');
			it('should allow you to get the locations of uniforms');
			it('should prevent you from getting locations if the shader isn\'t compiled yet');
			it('should automatically compile the shader on access if the sources are dirty');
		});
	}
}