package ;

import buddy.*;
import tusk.*;
import tusk.events.*;
import tusk.util.*;
using buddy.Should;

class TestMain implements Buddy<[
	TestEventRouter,
	TestRandom,
	TestVector
]>{}