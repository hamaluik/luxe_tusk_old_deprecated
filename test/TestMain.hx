package ;

import buddy.*;
import tusk.*;
import tusk.debug.*;
import tusk.events.*;
import tusk.math.*;
import tusk.resources.*;
using buddy.Should;

class TestMain implements Buddy<[
	TestAssert, TestException,
	TestEventRouter,
	TestMat4, TestRandom, TestVec3,
	TestMaterial, TestShader,
	TestComponent, TestEntity, TestGame, TestMatcher, TestProcessor
]>{}