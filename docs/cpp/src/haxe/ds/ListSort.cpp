#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_ListSort
#include <haxe/ds/ListSort.h>
#endif
namespace haxe{
namespace ds{

Void ListSort_obj::__construct()
{
	return null();
}

//ListSort_obj::~ListSort_obj() { }

Dynamic ListSort_obj::__CreateEmpty() { return  new ListSort_obj; }
hx::ObjectPtr< ListSort_obj > ListSort_obj::__new()
{  hx::ObjectPtr< ListSort_obj > _result_ = new ListSort_obj();
	_result_->__construct();
	return _result_;}

Dynamic ListSort_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListSort_obj > _result_ = new ListSort_obj();
	_result_->__construct();
	return _result_;}

Dynamic ListSort_obj::sort( Dynamic list,Dynamic cmp){
	HX_STACK_FRAME("haxe.ds.ListSort","sort",0x6a521e39,"haxe.ds.ListSort.sort","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ListSort.hx",43,0x4cc57252)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(cmp,"cmp")
	HX_STACK_LINE(45)
	bool tmp = (list == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(46)
		return null();
	}
	HX_STACK_LINE(47)
	int insize = (int)1;		HX_STACK_VAR(insize,"insize");
	HX_STACK_LINE(47)
	int nmerges;		HX_STACK_VAR(nmerges,"nmerges");
	HX_STACK_LINE(47)
	int psize = (int)0;		HX_STACK_VAR(psize,"psize");
	HX_STACK_LINE(47)
	int qsize = (int)0;		HX_STACK_VAR(qsize,"qsize");
	HX_STACK_LINE(48)
	Dynamic p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(48)
	Dynamic q;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(48)
	Dynamic e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(48)
	Dynamic tail = null();		HX_STACK_VAR(tail,"tail");
	HX_STACK_LINE(49)
	while((true)){
		HX_STACK_LINE(50)
		p = list;
		HX_STACK_LINE(51)
		list = null();
		HX_STACK_LINE(52)
		tail = null();
		HX_STACK_LINE(53)
		nmerges = (int)0;
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			bool tmp1 = (p != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			if ((tmp2)){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(55)
			(nmerges)++;
			HX_STACK_LINE(56)
			q = p;
			HX_STACK_LINE(57)
			psize = (int)0;
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				while((true)){
					HX_STACK_LINE(58)
					bool tmp3 = (_g < insize);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(58)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(58)
					if ((tmp4)){
						HX_STACK_LINE(58)
						break;
					}
					HX_STACK_LINE(58)
					int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(58)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(59)
					(psize)++;
					HX_STACK_LINE(60)
					q = q->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
					HX_STACK_LINE(61)
					bool tmp6 = (q == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					if ((tmp6)){
						HX_STACK_LINE(61)
						break;
					}
				}
			}
			HX_STACK_LINE(63)
			qsize = insize;
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				bool tmp3 = (psize > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				if ((tmp4)){
					HX_STACK_LINE(64)
					bool tmp6 = (qsize > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(64)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					if ((tmp8)){
						HX_STACK_LINE(64)
						tmp5 = (q != null());
					}
					else{
						HX_STACK_LINE(64)
						tmp5 = false;
					}
				}
				else{
					HX_STACK_LINE(64)
					tmp5 = true;
				}
				HX_STACK_LINE(64)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				if ((tmp6)){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(65)
				bool tmp7 = (psize == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				if ((tmp7)){
					HX_STACK_LINE(66)
					e = q;
					HX_STACK_LINE(67)
					q = q->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
					HX_STACK_LINE(68)
					(qsize)--;
				}
				else{
					HX_STACK_LINE(69)
					bool tmp8 = (qsize == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					if ((tmp10)){
						HX_STACK_LINE(69)
						tmp11 = (q == null());
					}
					else{
						HX_STACK_LINE(69)
						tmp11 = true;
					}
					HX_STACK_LINE(69)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					if ((tmp12)){
						HX_STACK_LINE(69)
						Dynamic tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(69)
						Dynamic tmp15 = q;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(69)
						Dynamic tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(69)
						Dynamic tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(69)
						int tmp18 = cmp(tmp16,tmp17).Cast< int >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(69)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(69)
						tmp13 = (tmp19 <= (int)0);
					}
					else{
						HX_STACK_LINE(69)
						tmp13 = true;
					}
					HX_STACK_LINE(69)
					if ((tmp13)){
						HX_STACK_LINE(70)
						e = p;
						HX_STACK_LINE(71)
						p = p->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
						HX_STACK_LINE(72)
						(psize)--;
					}
					else{
						HX_STACK_LINE(74)
						e = q;
						HX_STACK_LINE(75)
						q = q->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
						HX_STACK_LINE(76)
						(qsize)--;
					}
				}
				HX_STACK_LINE(78)
				bool tmp8 = (tail != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				if ((tmp8)){
					HX_STACK_LINE(79)
					tail->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = e;
				}
				else{
					HX_STACK_LINE(81)
					list = e;
				}
				HX_STACK_LINE(82)
				e->__FieldRef(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")) = tail;
				HX_STACK_LINE(83)
				tail = e;
			}
			HX_STACK_LINE(85)
			p = q;
		}
		HX_STACK_LINE(87)
		tail->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		HX_STACK_LINE(88)
		bool tmp1 = (nmerges <= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		if ((tmp1)){
			HX_STACK_LINE(89)
			break;
		}
		HX_STACK_LINE(90)
		hx::MultEq(insize,(int)2);
	}
	HX_STACK_LINE(92)
	list->__FieldRef(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")) = tail;
	HX_STACK_LINE(93)
	Dynamic tmp1 = list;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ListSort_obj,sort,return )

Dynamic ListSort_obj::sortSingleLinked( Dynamic list,Dynamic cmp){
	HX_STACK_FRAME("haxe.ds.ListSort","sortSingleLinked",0x09c7af5a,"haxe.ds.ListSort.sortSingleLinked","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ListSort.hx",100,0x4cc57252)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(cmp,"cmp")
	HX_STACK_LINE(101)
	bool tmp = (list == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	if ((tmp)){
		HX_STACK_LINE(102)
		return null();
	}
	HX_STACK_LINE(103)
	int insize = (int)1;		HX_STACK_VAR(insize,"insize");
	HX_STACK_LINE(103)
	int nmerges;		HX_STACK_VAR(nmerges,"nmerges");
	HX_STACK_LINE(103)
	int psize = (int)0;		HX_STACK_VAR(psize,"psize");
	HX_STACK_LINE(103)
	int qsize = (int)0;		HX_STACK_VAR(qsize,"qsize");
	HX_STACK_LINE(104)
	Dynamic p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(104)
	Dynamic q;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(104)
	Dynamic e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(104)
	Dynamic tail;		HX_STACK_VAR(tail,"tail");
	HX_STACK_LINE(105)
	while((true)){
		HX_STACK_LINE(106)
		p = list;
		HX_STACK_LINE(107)
		list = null();
		HX_STACK_LINE(108)
		tail = null();
		HX_STACK_LINE(109)
		nmerges = (int)0;
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			bool tmp1 = (p != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			if ((tmp2)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(111)
			(nmerges)++;
			HX_STACK_LINE(112)
			q = p;
			HX_STACK_LINE(113)
			psize = (int)0;
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(114)
				while((true)){
					HX_STACK_LINE(114)
					bool tmp3 = (_g < insize);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(114)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(114)
					if ((tmp4)){
						HX_STACK_LINE(114)
						break;
					}
					HX_STACK_LINE(114)
					int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(114)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(115)
					(psize)++;
					HX_STACK_LINE(116)
					q = q->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
					HX_STACK_LINE(117)
					bool tmp6 = (q == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(117)
					if ((tmp6)){
						HX_STACK_LINE(117)
						break;
					}
				}
			}
			HX_STACK_LINE(119)
			qsize = insize;
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				bool tmp3 = (psize > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(120)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				if ((tmp4)){
					HX_STACK_LINE(120)
					bool tmp6 = (qsize > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(120)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(120)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(120)
					if ((tmp8)){
						HX_STACK_LINE(120)
						tmp5 = (q != null());
					}
					else{
						HX_STACK_LINE(120)
						tmp5 = false;
					}
				}
				else{
					HX_STACK_LINE(120)
					tmp5 = true;
				}
				HX_STACK_LINE(120)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				if ((tmp6)){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(121)
				bool tmp7 = (psize == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				if ((tmp7)){
					HX_STACK_LINE(122)
					e = q;
					HX_STACK_LINE(123)
					q = q->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
					HX_STACK_LINE(124)
					(qsize)--;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp8 = (qsize == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(125)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(125)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(125)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(125)
					if ((tmp10)){
						HX_STACK_LINE(125)
						tmp11 = (q == null());
					}
					else{
						HX_STACK_LINE(125)
						tmp11 = true;
					}
					HX_STACK_LINE(125)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(125)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(125)
					if ((tmp12)){
						HX_STACK_LINE(125)
						Dynamic tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(125)
						Dynamic tmp15 = q;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(125)
						Dynamic tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(125)
						Dynamic tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(125)
						int tmp18 = cmp(tmp16,tmp17).Cast< int >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(125)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(125)
						tmp13 = (tmp19 <= (int)0);
					}
					else{
						HX_STACK_LINE(125)
						tmp13 = true;
					}
					HX_STACK_LINE(125)
					if ((tmp13)){
						HX_STACK_LINE(126)
						e = p;
						HX_STACK_LINE(127)
						p = p->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
						HX_STACK_LINE(128)
						(psize)--;
					}
					else{
						HX_STACK_LINE(130)
						e = q;
						HX_STACK_LINE(131)
						q = q->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
						HX_STACK_LINE(132)
						(qsize)--;
					}
				}
				HX_STACK_LINE(134)
				bool tmp8 = (tail != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				if ((tmp8)){
					HX_STACK_LINE(135)
					tail->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = e;
				}
				else{
					HX_STACK_LINE(137)
					list = e;
				}
				HX_STACK_LINE(138)
				tail = e;
			}
			HX_STACK_LINE(140)
			p = q;
		}
		HX_STACK_LINE(142)
		tail->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		HX_STACK_LINE(143)
		bool tmp1 = (nmerges <= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(144)
			break;
		}
		HX_STACK_LINE(145)
		hx::MultEq(insize,(int)2);
	}
	HX_STACK_LINE(147)
	Dynamic tmp1 = list;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ListSort_obj,sortSingleLinked,return )


ListSort_obj::ListSort_obj()
{
}

bool ListSort_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sortSingleLinked") ) { outValue = sortSingleLinked_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListSort_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListSort_obj::__mClass,"__mClass");
};

#endif

hx::Class ListSort_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("sortSingleLinked","\xff","\x5b","\x09","\xb6"),
	::String(null()) };

void ListSort_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.ListSort","\x73","\xd7","\x33","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListSort_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ListSort_obj >;
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

} // end namespace haxe
} // end namespace ds
