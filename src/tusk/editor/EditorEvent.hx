package tusk.editor;

#if editor

typedef EditorEventHandler = Void->Void;

class EditorEvent {
	private var changed:Array<EditorEventHandler> = new Array<EditorEventHandler>();
	public function new() {}

	public function trigger() {
		for(change in changed) {
			change();
		}
	}

	public function listen(listener:EditorEventHandler) {
		changed.push(listener);
	}

	public function unlisten(listener:EditorEventHandler) {
		changed.remove(listener);
	}
}

#end