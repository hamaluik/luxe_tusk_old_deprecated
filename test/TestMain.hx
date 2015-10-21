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
	TestMatrix4x4, TestRandom, TestVector,
	TestMaterial, TestShader,
	TestComponent, TestEntity, TestEntityTools, TestMatcher, TestProcessor
]>{}