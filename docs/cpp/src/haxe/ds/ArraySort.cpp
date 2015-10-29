#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
namespace haxe{
namespace ds{

Void ArraySort_obj::__construct()
{
	return null();
}

//ArraySort_obj::~ArraySort_obj() { }

Dynamic ArraySort_obj::__CreateEmpty() { return  new ArraySort_obj; }
hx::ObjectPtr< ArraySort_obj > ArraySort_obj::__new()
{  hx::ObjectPtr< ArraySort_obj > _result_ = new ArraySort_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArraySort_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArraySort_obj > _result_ = new ArraySort_obj();
	_result_->__construct();
	return _result_;}

Void ArraySort_obj::sort( cpp::ArrayBase a,Dynamic cmp){
{
		HX_STACK_FRAME("haxe.ds.ArraySort","sort",0xa0749d6c,"haxe.ds.ArraySort.sort","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",43,0xf1bef697)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(cmp,"cmp")
		HX_STACK_LINE(44)
		Dynamic tmp = cmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::haxe::ds::ArraySort_obj::rec(a,tmp,(int)0,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArraySort_obj,sort,(void))

Void ArraySort_obj::rec( cpp::ArrayBase a,Dynamic cmp,int from,int to){
{
		HX_STACK_FRAME("haxe.ds.ArraySort","rec",0xd9af5f02,"haxe.ds.ArraySort.rec","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",47,0xf1bef697)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(cmp,"cmp")
		HX_STACK_ARG(from,"from")
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(48)
		int tmp = (from + to);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		int tmp1 = (int(tmp) >> int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		int middle = tmp1;		HX_STACK_VAR(middle,"middle");
		HX_STACK_LINE(49)
		int tmp2 = (to - from);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		bool tmp3 = (tmp2 < (int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		if ((tmp3)){
			HX_STACK_LINE(50)
			bool tmp4 = (to <= from);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			if ((tmp4)){
				HX_STACK_LINE(50)
				return null();
			}
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				int tmp5 = (from + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				int _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(51)
				while((true)){
					HX_STACK_LINE(51)
					bool tmp6 = (_g < to);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(51)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(51)
					if ((tmp7)){
						HX_STACK_LINE(51)
						break;
					}
					HX_STACK_LINE(51)
					int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(51)
					int i = tmp8;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(52)
					int j = i;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(53)
					while((true)){
						HX_STACK_LINE(53)
						bool tmp9 = (j > from);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(53)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(53)
						if ((tmp10)){
							HX_STACK_LINE(53)
							break;
						}
						HX_STACK_LINE(54)
						Dynamic tmp11 = a->__GetItem(j);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(54)
						int tmp12 = (j - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(54)
						Dynamic tmp13 = a->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(54)
						int tmp14 = cmp(tmp11,tmp13).Cast< int >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(54)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(54)
						bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(54)
						if ((tmp16)){
							HX_STACK_LINE(55)
							int tmp17 = (j - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(55)
							int tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(55)
							::haxe::ds::ArraySort_obj::swap(a,tmp17,tmp18);
						}
						else{
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(58)
						(j)--;
					}
				}
			}
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(63)
		Dynamic tmp4 = cmp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		int tmp5 = from;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		int tmp6 = middle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		::haxe::ds::ArraySort_obj::rec(a,tmp4,tmp5,tmp6);
		HX_STACK_LINE(64)
		Dynamic tmp7 = cmp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = middle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		int tmp9 = to;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		::haxe::ds::ArraySort_obj::rec(a,tmp7,tmp8,tmp9);
		HX_STACK_LINE(65)
		Dynamic tmp10 = cmp;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		int tmp11 = from;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		int tmp12 = middle;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		int tmp13 = to;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(65)
		int tmp14 = (middle - from);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(65)
		int tmp15 = (to - middle);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(65)
		::haxe::ds::ArraySort_obj::doMerge(a,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArraySort_obj,rec,(void))

Void ArraySort_obj::doMerge( cpp::ArrayBase a,Dynamic cmp,int from,int pivot,int to,int len1,int len2){
{
		HX_STACK_FRAME("haxe.ds.ArraySort","doMerge",0x66c5c9df,"haxe.ds.ArraySort.doMerge","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",68,0xf1bef697)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(cmp,"cmp")
		HX_STACK_ARG(from,"from")
		HX_STACK_ARG(pivot,"pivot")
		HX_STACK_ARG(to,"to")
		HX_STACK_ARG(len1,"len1")
		HX_STACK_ARG(len2,"len2")
		HX_STACK_LINE(69)
		int first_cut;		HX_STACK_VAR(first_cut,"first_cut");
		HX_STACK_LINE(69)
		int second_cut;		HX_STACK_VAR(second_cut,"second_cut");
		HX_STACK_LINE(69)
		int len11;		HX_STACK_VAR(len11,"len11");
		HX_STACK_LINE(69)
		int len22;		HX_STACK_VAR(len22,"len22");
		HX_STACK_LINE(69)
		int new_mid;		HX_STACK_VAR(new_mid,"new_mid");
		HX_STACK_LINE(70)
		bool tmp = (len1 == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(70)
			tmp2 = (len2 == (int)0);
		}
		else{
			HX_STACK_LINE(70)
			tmp2 = true;
		}
		HX_STACK_LINE(70)
		if ((tmp2)){
			HX_STACK_LINE(71)
			return null();
		}
		HX_STACK_LINE(72)
		int tmp3 = (len1 + len2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		if ((tmp4)){
			HX_STACK_LINE(73)
			Dynamic tmp5 = a->__GetItem(pivot);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			Dynamic tmp6 = a->__GetItem(from);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			int tmp7 = cmp(tmp5,tmp6).Cast< int >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			if ((tmp8)){
				HX_STACK_LINE(74)
				int tmp9 = pivot;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(74)
				int tmp10 = from;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(74)
				::haxe::ds::ArraySort_obj::swap(a,tmp9,tmp10);
			}
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(77)
		bool tmp5 = (len1 > len2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		if ((tmp5)){
			HX_STACK_LINE(78)
			int tmp6 = (int(len1) >> int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			len11 = tmp6;
			HX_STACK_LINE(79)
			int tmp7 = (from + len11);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(79)
			first_cut = tmp7;
			HX_STACK_LINE(80)
			Dynamic tmp8 = cmp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			int tmp9 = pivot;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			int tmp10 = to;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(80)
			int tmp11 = first_cut;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(80)
			int tmp12 = ::haxe::ds::ArraySort_obj::lower(a,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(80)
			second_cut = tmp12;
			HX_STACK_LINE(81)
			int tmp13 = (second_cut - pivot);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			len22 = tmp13;
		}
		else{
			HX_STACK_LINE(83)
			int tmp6 = (int(len2) >> int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			len22 = tmp6;
			HX_STACK_LINE(84)
			int tmp7 = (pivot + len22);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			second_cut = tmp7;
			HX_STACK_LINE(85)
			Dynamic tmp8 = cmp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			int tmp9 = from;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			int tmp10 = pivot;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			int tmp11 = second_cut;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			int tmp12 = ::haxe::ds::ArraySort_obj::upper(a,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(85)
			first_cut = tmp12;
			HX_STACK_LINE(86)
			int tmp13 = (first_cut - from);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			len11 = tmp13;
		}
		HX_STACK_LINE(88)
		Dynamic tmp6 = cmp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		int tmp7 = first_cut;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		int tmp8 = pivot;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		int tmp9 = second_cut;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		::haxe::ds::ArraySort_obj::rotate(a,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(89)
		int tmp10 = (first_cut + len22);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		new_mid = tmp10;
		HX_STACK_LINE(90)
		Dynamic tmp11 = cmp;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(90)
		int tmp12 = from;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(90)
		int tmp13 = first_cut;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(90)
		int tmp14 = new_mid;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(90)
		int tmp15 = len11;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		int tmp16 = len22;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(90)
		::haxe::ds::ArraySort_obj::doMerge(a,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
		HX_STACK_LINE(91)
		Dynamic tmp17 = cmp;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		int tmp18 = new_mid;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(91)
		int tmp19 = second_cut;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(91)
		int tmp20 = to;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(91)
		int tmp21 = (len1 - len11);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(91)
		int tmp22 = (len2 - len22);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(91)
		::haxe::ds::ArraySort_obj::doMerge(a,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ArraySort_obj,doMerge,(void))

Void ArraySort_obj::rotate( cpp::ArrayBase a,Dynamic cmp,int from,int mid,int to){
{
		HX_STACK_FRAME("haxe.ds.ArraySort","rotate",0xb7d0dbe9,"haxe.ds.ArraySort.rotate","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",94,0xf1bef697)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(cmp,"cmp")
		HX_STACK_ARG(from,"from")
		HX_STACK_ARG(mid,"mid")
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(95)
		int n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		bool tmp = (from == mid);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(96)
			tmp2 = (mid == to);
		}
		else{
			HX_STACK_LINE(96)
			tmp2 = true;
		}
		HX_STACK_LINE(96)
		if ((tmp2)){
			HX_STACK_LINE(96)
			return null();
		}
		HX_STACK_LINE(97)
		int tmp3 = (to - from);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		int tmp4 = (mid - from);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		int tmp5 = ::haxe::ds::ArraySort_obj::gcd(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		n = tmp5;
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			int tmp6 = (n)--;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			if ((tmp8)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(99)
			int tmp9 = (from + n);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			Dynamic tmp10 = a->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			Dynamic val = tmp10;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(100)
			int tmp11 = (mid - from);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			int shift = tmp11;		HX_STACK_VAR(shift,"shift");
			HX_STACK_LINE(101)
			int tmp12 = (from + n);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(101)
			int p1 = tmp12;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(101)
			int tmp13 = (from + n);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(101)
			int tmp14 = shift;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(101)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(101)
			int p2 = tmp15;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				int tmp16 = p2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				int tmp17 = (from + n);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(102)
				if ((tmp19)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(103)
				Dynamic tmp20 = a->__GetItem(p2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(103)
				hx::IndexRef((a).mPtr,p1) = tmp20;
				HX_STACK_LINE(104)
				p1 = p2;
				HX_STACK_LINE(105)
				int tmp21 = (to - p2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(105)
				int tmp22 = shift;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(105)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(105)
				if ((tmp23)){
					HX_STACK_LINE(105)
					hx::AddEq(p2,shift);
				}
				else{
					HX_STACK_LINE(106)
					int tmp24 = from;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(106)
					int tmp25 = shift;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(106)
					int tmp26 = (to - p2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(106)
					int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(106)
					int tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(106)
					p2 = tmp28;
				}
			}
			HX_STACK_LINE(108)
			Dynamic tmp16 = val;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(108)
			hx::IndexRef((a).mPtr,p1) = tmp16;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,rotate,(void))

int ArraySort_obj::gcd( int m,int n){
	HX_STACK_FRAME("haxe.ds.ArraySort","gcd",0xd9a7047a,"haxe.ds.ArraySort.gcd","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",112,0xf1bef697)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(113)
	while((true)){
		HX_STACK_LINE(113)
		bool tmp = (n != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(113)
			break;
		}
		HX_STACK_LINE(114)
		int tmp2 = hx::Mod(m,n);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		int t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(115)
		m = n;
		HX_STACK_LINE(116)
		n = t;
	}
	HX_STACK_LINE(118)
	int tmp = m;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArraySort_obj,gcd,return )

int ArraySort_obj::upper( cpp::ArrayBase a,Dynamic cmp,int from,int to,int val){
	HX_STACK_FRAME("haxe.ds.ArraySort","upper",0xed09ef94,"haxe.ds.ArraySort.upper","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",121,0xf1bef697)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(cmp,"cmp")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(122)
	int tmp = (to - from);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	int len = tmp;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(122)
	int half;		HX_STACK_VAR(half,"half");
	HX_STACK_LINE(122)
	int mid;		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(123)
	while((true)){
		HX_STACK_LINE(123)
		bool tmp1 = (len > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(123)
			break;
		}
		HX_STACK_LINE(124)
		int tmp3 = (int(len) >> int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		half = tmp3;
		HX_STACK_LINE(125)
		int tmp4 = (from + half);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		mid = tmp4;
		HX_STACK_LINE(126)
		Dynamic tmp5 = a->__GetItem(val);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		Dynamic tmp6 = a->__GetItem(mid);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		int tmp7 = cmp(tmp5,tmp6).Cast< int >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		if ((tmp8)){
			HX_STACK_LINE(127)
			len = half;
		}
		else{
			HX_STACK_LINE(129)
			int tmp9 = (mid + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(129)
			from = tmp9;
			HX_STACK_LINE(130)
			int tmp10 = (len - half);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			len = tmp11;
		}
	}
	HX_STACK_LINE(133)
	int tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,upper,return )

int ArraySort_obj::lower( cpp::ArrayBase a,Dynamic cmp,int from,int to,int val){
	HX_STACK_FRAME("haxe.ds.ArraySort","lower",0xbdcad033,"haxe.ds.ArraySort.lower","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",136,0xf1bef697)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(cmp,"cmp")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(137)
	int tmp = (to - from);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int len = tmp;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(137)
	int half;		HX_STACK_VAR(half,"half");
	HX_STACK_LINE(137)
	int mid;		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(138)
	while((true)){
		HX_STACK_LINE(138)
		bool tmp1 = (len > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		if ((tmp2)){
			HX_STACK_LINE(138)
			break;
		}
		HX_STACK_LINE(139)
		int tmp3 = (int(len) >> int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		half = tmp3;
		HX_STACK_LINE(140)
		int tmp4 = (from + half);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		mid = tmp4;
		HX_STACK_LINE(141)
		Dynamic tmp5 = a->__GetItem(mid);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		Dynamic tmp6 = a->__GetItem(val);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		int tmp7 = cmp(tmp5,tmp6).Cast< int >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(141)
		bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		if ((tmp8)){
			HX_STACK_LINE(142)
			int tmp9 = (mid + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			from = tmp9;
			HX_STACK_LINE(143)
			int tmp10 = (len - half);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			len = tmp11;
		}
		else{
			HX_STACK_LINE(145)
			len = half;
		}
	}
	HX_STACK_LINE(147)
	int tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,lower,return )

Void ArraySort_obj::swap( cpp::ArrayBase a,int i,int j){
{
		HX_STACK_FRAME("haxe.ds.ArraySort","swap",0xa07aa0a1,"haxe.ds.ArraySort.swap","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",150,0xf1bef697)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(j,"j")
		HX_STACK_LINE(151)
		Dynamic tmp = a->__GetItem(i);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		Dynamic tmp2 = a->__GetItem(j);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		hx::IndexRef((a).mPtr,i) = tmp2;
		HX_STACK_LINE(153)
		Dynamic tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		hx::IndexRef((a).mPtr,j) = tmp3;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArraySort_obj,swap,(void))

int ArraySort_obj::compare( cpp::ArrayBase a,Dynamic cmp,int i,int j){
	HX_STACK_FRAME("haxe.ds.ArraySort","compare",0xb13b5f57,"haxe.ds.ArraySort.compare","C:\\HaxeToolkit\\haxe\\std/haxe/ds/ArraySort.hx",156,0xf1bef697)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(cmp,"cmp")
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(j,"j")
	HX_STACK_LINE(157)
	Dynamic tmp = a->__GetItem(i);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Dynamic tmp1 = a->__GetItem(j);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	int tmp2 = cmp(tmp,tmp1).Cast< int >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArraySort_obj,compare,return )


ArraySort_obj::ArraySort_obj()
{
}

bool ArraySort_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rec") ) { outValue = rec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gcd") ) { outValue = gcd_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upper") ) { outValue = upper_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lower") ) { outValue = lower_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doMerge") ) { outValue = doMerge_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArraySort_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArraySort_obj::__mClass,"__mClass");
};

#endif

hx::Class ArraySort_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("rec","\x50","\xd9","\x56","\x00"),
	HX_HCSTRING("doMerge","\x2d","\x83","\xf3","\x38"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("gcd","\xc8","\x7e","\x4e","\x00"),
	HX_HCSTRING("upper","\x62","\x19","\x3f","\xa8"),
	HX_HCSTRING("lower","\x01","\xfa","\xff","\x78"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	::String(null()) };

void ArraySort_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.ArraySort","\x20","\xa5","\xe7","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArraySort_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArraySort_obj >;
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
