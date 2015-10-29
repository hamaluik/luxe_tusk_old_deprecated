#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif

Void Lambda_obj::__construct()
{
	return null();
}

//Lambda_obj::~Lambda_obj() { }

Dynamic Lambda_obj::__CreateEmpty() { return  new Lambda_obj; }
hx::ObjectPtr< Lambda_obj > Lambda_obj::__new()
{  hx::ObjectPtr< Lambda_obj > _result_ = new Lambda_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lambda_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lambda_obj > _result_ = new Lambda_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase Lambda_obj::array( Dynamic it){
	HX_STACK_FRAME("Lambda","array",0x9c8b0512,"Lambda.array","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",42,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(43)
	cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(44)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic i = __it->next();
		{
			HX_STACK_LINE(45)
			Dynamic tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
;
	}
	HX_STACK_LINE(46)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

::List Lambda_obj::list( Dynamic it){
	HX_STACK_FRAME("Lambda","list",0x9f7ad705,"Lambda.list","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",54,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(55)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(56)
	Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic i = __it->next();
		{
			HX_STACK_LINE(57)
			Dynamic tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			l->add(tmp2);
		}
;
	}
	HX_STACK_LINE(58)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,list,return )

::List Lambda_obj::map( Dynamic it,Dynamic f){
	HX_STACK_FRAME("Lambda","map",0x3d8fa1d5,"Lambda.map","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",68,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(69)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(70)
	Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(71)
			Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			Dynamic tmp3 = f(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			l->add(tmp3);
		}
;
	}
	HX_STACK_LINE(72)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,map,return )

::List Lambda_obj::mapi( Dynamic it,Dynamic f){
	HX_STACK_FRAME("Lambda","mapi",0xa01df8f4,"Lambda.mapi","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",82,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(83)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(84)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(85)
	Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(86)
			int tmp2 = (i)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			Dynamic tmp4 = f(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(86)
			l->add(tmp4);
		}
;
	}
	HX_STACK_LINE(87)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,mapi,return )

bool Lambda_obj::has( Dynamic it,Dynamic elt){
	HX_STACK_FRAME("Lambda","has",0x3d8bd693,"Lambda.has","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",98,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(elt,"elt")
	HX_STACK_LINE(99)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(100)
			bool tmp1 = (x == elt);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			if ((tmp1)){
				HX_STACK_LINE(101)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,has,return )

bool Lambda_obj::exists( Dynamic it,Dynamic f){
	HX_STACK_FRAME("Lambda","exists",0x65091043,"Lambda.exists","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",115,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(116)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(117)
			Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			bool tmp2 = f(tmp1).Cast< bool >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			if ((tmp2)){
				HX_STACK_LINE(118)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(119)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,exists,return )

bool Lambda_obj::foreach( Dynamic it,Dynamic f){
	HX_STACK_FRAME("Lambda","foreach",0xb8902543,"Lambda.foreach","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",134,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(135)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(136)
			Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			bool tmp2 = f(tmp1).Cast< bool >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			if ((tmp3)){
				HX_STACK_LINE(137)
				return false;
			}
		}
;
	}
	HX_STACK_LINE(138)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,foreach,return )

Void Lambda_obj::iter( Dynamic it,Dynamic f){
{
		HX_STACK_FRAME("Lambda","iter",0x9d877fbf,"Lambda.iter","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",146,0x9e372efe)
		HX_STACK_ARG(it,"it")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(147)
		Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
			Dynamic x = __it->next();
			{
				HX_STACK_LINE(148)
				Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(148)
				f(tmp1).Cast< Void >();
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,iter,(void))

::List Lambda_obj::filter( Dynamic it,Dynamic f){
	HX_STACK_FRAME("Lambda","filter",0x2a5e121f,"Lambda.filter","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",159,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(160)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(161)
	Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(162)
			Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			bool tmp3 = f(tmp2).Cast< bool >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			if ((tmp3)){
				HX_STACK_LINE(163)
				Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				l->add(tmp4);
			}
		}
;
	}
	HX_STACK_LINE(164)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,filter,return )

Dynamic Lambda_obj::fold( Dynamic it,Dynamic f,Dynamic first){
	HX_STACK_FRAME("Lambda","fold",0x9b8816a8,"Lambda.fold","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",179,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(first,"first")
	HX_STACK_LINE(180)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(181)
			Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			Dynamic tmp2 = first;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			Dynamic tmp3 = f(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			first = tmp3;
		}
;
	}
	HX_STACK_LINE(182)
	Dynamic tmp1 = first;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lambda_obj,fold,return )

int Lambda_obj::count( Dynamic it,Dynamic pred){
	HX_STACK_FRAME("Lambda","count",0xc15edc48,"Lambda.count","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",191,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(pred,"pred")
	HX_STACK_LINE(192)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(193)
	bool tmp = (pred == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	if ((tmp)){
		HX_STACK_LINE(194)
		Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
			Dynamic _ = __it->next();
			(n)++;
		}
	}
	else{
		HX_STACK_LINE(197)
		Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
			Dynamic x = __it->next();
			{
				HX_STACK_LINE(198)
				Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(198)
				bool tmp3 = pred(tmp2).Cast< bool >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				if ((tmp3)){
					HX_STACK_LINE(199)
					(n)++;
				}
			}
;
		}
	}
	HX_STACK_LINE(200)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,count,return )

bool Lambda_obj::empty( Dynamic it){
	HX_STACK_FRAME("Lambda","empty",0xe6d5d206,"Lambda.empty","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",206,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(207)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	bool tmp1 = tmp->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,empty,return )

int Lambda_obj::indexOf( Dynamic it,Dynamic v){
	HX_STACK_FRAME("Lambda","indexOf",0xbf6a7082,"Lambda.indexOf","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",217,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(218)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(219)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic v2 = __it->next();
		{
			HX_STACK_LINE(220)
			bool tmp1 = (v == v2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(220)
			if ((tmp1)){
				HX_STACK_LINE(221)
				int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(221)
				return tmp2;
			}
			HX_STACK_LINE(222)
			(i)++;
		}
;
	}
	HX_STACK_LINE(224)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,indexOf,return )

Dynamic Lambda_obj::find( Dynamic it,Dynamic f){
	HX_STACK_FRAME("Lambda","find",0x9b838ae0,"Lambda.find","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",237,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(238)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic v = __it->next();
		{
			HX_STACK_LINE(239)
			Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			bool tmp2 = f(tmp1).Cast< bool >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			if ((tmp2)){
				HX_STACK_LINE(239)
				Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				return tmp3;
			}
		}
;
	}
	HX_STACK_LINE(241)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,find,return )

::List Lambda_obj::concat( Dynamic a,Dynamic b){
	HX_STACK_FRAME("Lambda","concat",0x6cf8fb7b,"Lambda.concat","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",250,0x9e372efe)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(251)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(252)
	Dynamic tmp1 = a->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(253)
			Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			l->add(tmp2);
		}
;
	}
	HX_STACK_LINE(254)
	Dynamic tmp2 = b->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp2);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(255)
			Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(255)
			l->add(tmp3);
		}
;
	}
	HX_STACK_LINE(256)
	::List tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,concat,return )


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mapi") ) { outValue = mapi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fold") ) { outValue = fold_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"find") ) { outValue = find_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = empty_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foreach") ) { outValue = foreach_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#endif

hx::Class Lambda_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("mapi","\x4d","\x3e","\x56","\x48"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("foreach","\x8a","\xfd","\xe4","\xd9"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("fold","\x01","\x5c","\xc0","\x43"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	::String(null()) };

void Lambda_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Lambda","\x27","\xa7","\x54","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lambda_obj >;
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

