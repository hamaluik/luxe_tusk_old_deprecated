#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif

Void List_obj::__construct()
{
HX_STACK_FRAME("List","new",0xed890070,"List.new","C:\\HaxeToolkit\\haxe\\std/List.hx",41,0x1e139e47)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	this->length = (int)0;
}
;
	return null();
}

//List_obj::~List_obj() { }

Dynamic List_obj::__CreateEmpty() { return  new List_obj; }
hx::ObjectPtr< List_obj > List_obj::__new()
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct();
	return _result_;}

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct();
	return _result_;}

Void List_obj::add( Dynamic item){
{
		HX_STACK_FRAME("List","add",0xed7f2231,"List.add","C:\\HaxeToolkit\\haxe\\std/List.hx",49,0x1e139e47)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(50)
		cpp::ArrayBase x = cpp::ArrayBase_obj::__new().Add(item);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(51)
		bool tmp = (this->h == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		if ((tmp)){
			HX_STACK_LINE(52)
			this->h = x;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((this->q).mPtr,(int)1) = x;
		}
		HX_STACK_LINE(55)
		this->q = x;
		HX_STACK_LINE(56)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,add,(void))

Void List_obj::push( Dynamic item){
{
		HX_STACK_FRAME("List","push",0xebb5efca,"List.push","C:\\HaxeToolkit\\haxe\\std/List.hx",64,0x1e139e47)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(68)
		cpp::ArrayBase x = cpp::ArrayBase_obj::__new().Add(item).Add(this->h);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(70)
		this->h = x;
		HX_STACK_LINE(71)
		bool tmp = (this->q == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(72)
			this->q = x;
		}
		HX_STACK_LINE(73)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,push,(void))

Dynamic List_obj::first( ){
	HX_STACK_FRAME("List","first",0x898acc40,"List.first","C:\\HaxeToolkit\\haxe\\std/List.hx",81,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	bool tmp = (this->h == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(82)
		tmp1 = this->h->__GetItem((int)0);
	}
	HX_STACK_LINE(82)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,first,return )

Dynamic List_obj::last( ){
	HX_STACK_FRAME("List","last",0xe901e846,"List.last","C:\\HaxeToolkit\\haxe\\std/List.hx",90,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	bool tmp = (this->q == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	if ((tmp)){
		HX_STACK_LINE(91)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(91)
		tmp1 = this->q->__GetItem((int)0);
	}
	HX_STACK_LINE(91)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,last,return )

Dynamic List_obj::pop( ){
	HX_STACK_FRAME("List","pop",0xed8a8da1,"List.pop","C:\\HaxeToolkit\\haxe\\std/List.hx",100,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	bool tmp = (this->h == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	if ((tmp)){
		HX_STACK_LINE(102)
		return null();
	}
	HX_STACK_LINE(103)
	Dynamic tmp1 = this->h->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	Dynamic x = tmp1;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(104)
	Dynamic tmp2 = this->h->__GetItem((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	this->h = tmp2;
	HX_STACK_LINE(105)
	bool tmp3 = (this->h == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	if ((tmp3)){
		HX_STACK_LINE(106)
		this->q = null();
	}
	HX_STACK_LINE(107)
	(this->length)--;
	HX_STACK_LINE(108)
	Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,pop,return )

bool List_obj::isEmpty( ){
	HX_STACK_FRAME("List","isEmpty",0xaa565653,"List.isEmpty","C:\\HaxeToolkit\\haxe\\std/List.hx",114,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	bool tmp = (this->h == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,isEmpty,return )

Void List_obj::clear( ){
{
		HX_STACK_FRAME("List","clear",0xd148c59d,"List.clear","C:\\HaxeToolkit\\haxe\\std/List.hx",124,0x1e139e47)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		this->h = null();
		HX_STACK_LINE(126)
		this->q = null();
		HX_STACK_LINE(127)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,clear,(void))

bool List_obj::remove( Dynamic v){
	HX_STACK_FRAME("List","remove",0x4b44d634,"List.remove","C:\\HaxeToolkit\\haxe\\std/List.hx",138,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(139)
	cpp::ArrayBase prev = null();		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(140)
	cpp::ArrayBase l = this->h;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(141)
	while((true)){
		HX_STACK_LINE(141)
		bool tmp = (l != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(141)
			break;
		}
		HX_STACK_LINE(142)
		Dynamic tmp2 = l->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		if ((tmp4)){
			HX_STACK_LINE(143)
			bool tmp5 = (prev == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			if ((tmp5)){
				HX_STACK_LINE(144)
				Dynamic tmp6 = l->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(144)
				this->h = tmp6;
			}
			else{
				HX_STACK_LINE(146)
				Dynamic tmp6 = l->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(146)
				hx::IndexRef((prev).mPtr,(int)1) = tmp6;
			}
			HX_STACK_LINE(147)
			bool tmp6 = (this->q == l);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			if ((tmp6)){
				HX_STACK_LINE(148)
				this->q = prev;
			}
			HX_STACK_LINE(149)
			(this->length)--;
			HX_STACK_LINE(150)
			return true;
		}
		HX_STACK_LINE(152)
		prev = l;
		HX_STACK_LINE(153)
		Dynamic tmp5 = l->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		l = tmp5;
	}
	HX_STACK_LINE(155)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,remove,return )

::_List::ListIterator List_obj::iterator( ){
	HX_STACK_FRAME("List","iterator",0x2d4cdfde,"List.iterator","C:\\HaxeToolkit\\haxe\\std/List.hx",161,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	::_List::ListIterator tmp = ::_List::ListIterator_obj::__new(this->h);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,iterator,return )

::String List_obj::toString( ){
	HX_STACK_FRAME("List","toString",0xd221669c,"List.toString","C:\\HaxeToolkit\\haxe\\std/List.hx",171,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(173)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(174)
	cpp::ArrayBase l = this->h;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(175)
	s->add(HX_HCSTRING("{","\x7b","\x00","\x00","\x00"));
	HX_STACK_LINE(176)
	while((true)){
		HX_STACK_LINE(176)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		if ((tmp2)){
			HX_STACK_LINE(176)
			break;
		}
		HX_STACK_LINE(177)
		bool tmp3 = first;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		if ((tmp3)){
			HX_STACK_LINE(178)
			first = false;
		}
		else{
			HX_STACK_LINE(180)
			s->add(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
		}
		HX_STACK_LINE(181)
		Dynamic tmp4 = l->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		s->add(tmp5);
		HX_STACK_LINE(182)
		Dynamic tmp6 = l->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		l = tmp6;
	}
	HX_STACK_LINE(184)
	s->add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(185)
	::String tmp1 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,toString,return )

::String List_obj::join( ::String sep){
	HX_STACK_FRAME("List","join",0xe7ba11da,"List.join","C:\\HaxeToolkit\\haxe\\std/List.hx",192,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(193)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(194)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(195)
	cpp::ArrayBase l = this->h;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(196)
	while((true)){
		HX_STACK_LINE(196)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		if ((tmp2)){
			HX_STACK_LINE(196)
			break;
		}
		HX_STACK_LINE(197)
		bool tmp3 = first;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		if ((tmp3)){
			HX_STACK_LINE(198)
			first = false;
		}
		else{
			HX_STACK_LINE(200)
			::String tmp4 = sep;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			s->add(tmp4);
		}
		HX_STACK_LINE(201)
		Dynamic tmp4 = l->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		s->add(tmp4);
		HX_STACK_LINE(202)
		Dynamic tmp5 = l->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		l = tmp5;
	}
	HX_STACK_LINE(204)
	::String tmp1 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,join,return )

::List List_obj::filter( Dynamic f){
	HX_STACK_FRAME("List","filter",0xcbf159a8,"List.filter","C:\\HaxeToolkit\\haxe\\std/List.hx",211,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(212)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::List l2 = tmp;		HX_STACK_VAR(l2,"l2");
	HX_STACK_LINE(213)
	cpp::ArrayBase l = this->h;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(214)
	while((true)){
		HX_STACK_LINE(214)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		if ((tmp2)){
			HX_STACK_LINE(214)
			break;
		}
		HX_STACK_LINE(215)
		Dynamic tmp3 = l->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		Dynamic v = tmp3;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(216)
		Dynamic tmp4 = l->__GetItem((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		l = tmp4;
		HX_STACK_LINE(217)
		Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		bool tmp6 = f(tmp5).Cast< bool >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		if ((tmp6)){
			HX_STACK_LINE(218)
			Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			l2->add(tmp7);
		}
	}
	HX_STACK_LINE(220)
	::List tmp1 = l2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,filter,return )

::List List_obj::map( Dynamic f){
	HX_STACK_FRAME("List","map",0xed883aac,"List.map","C:\\HaxeToolkit\\haxe\\std/List.hx",227,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(228)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	::List b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(229)
	cpp::ArrayBase l = this->h;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(230)
	while((true)){
		HX_STACK_LINE(230)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		if ((tmp2)){
			HX_STACK_LINE(230)
			break;
		}
		HX_STACK_LINE(231)
		Dynamic tmp3 = l->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		Dynamic v = tmp3;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(232)
		Dynamic tmp4 = l->__GetItem((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		l = tmp4;
		HX_STACK_LINE(233)
		Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		b->add(tmp6);
	}
	HX_STACK_LINE(235)
	::List tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,map,return )


List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"last") ) { return last_dyn(); }
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic List_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(List_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(List_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(List_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#endif

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("List","\x7e","\x48","\x8c","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

