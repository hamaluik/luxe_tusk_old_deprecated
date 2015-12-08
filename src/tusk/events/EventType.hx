package tusk.events;

/**
 * The types of events that can be hooked into.
 */
enum EventType {
	Load;
	Start;
	Update;
	Render;
	Destroy;
	KeyDown;
	KeyUp;
	MouseDown;
	MouseUp;
	MouseMove;
}