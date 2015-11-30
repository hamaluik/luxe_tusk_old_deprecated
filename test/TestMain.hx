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
	TestRandom,
	TestMaterial, TestShader,
	TestComponent, TestEntity, TestGame, TestMatcher, TestProcessor
]>{}