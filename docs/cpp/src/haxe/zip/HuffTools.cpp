#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
namespace haxe{
namespace zip{

Void HuffTools_obj::__construct()
{
HX_STACK_FRAME("haxe.zip.HuffTools","new",0x5263948b,"haxe.zip.HuffTools.new","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Huffman.hx",32,0x9daf784f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//HuffTools_obj::~HuffTools_obj() { }

Dynamic HuffTools_obj::__CreateEmpty() { return  new HuffTools_obj; }
hx::ObjectPtr< HuffTools_obj > HuffTools_obj::__new()
{  hx::ObjectPtr< HuffTools_obj > _result_ = new HuffTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic HuffTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HuffTools_obj > _result_ = new HuffTools_obj();
	_result_->__construct();
	return _result_;}

int HuffTools_obj::treeDepth( ::haxe::zip::Huffman t){
	HX_STACK_FRAME("haxe.zip.HuffTools","treeDepth",0x748ac930,"haxe.zip.HuffTools.treeDepth","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Huffman.hx",35,0x9daf784f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(36)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(37)
			tmp = (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(36)
			::haxe::zip::Huffman tmp1 = (::haxe::zip::Huffman(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			::haxe::zip::Huffman b = tmp1;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(36)
			::haxe::zip::Huffman tmp2 = (::haxe::zip::Huffman(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::haxe::zip::Huffman a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(40)
				::haxe::zip::Huffman tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				int tmp4 = this->treeDepth(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				int da = tmp4;		HX_STACK_VAR(da,"da");
				HX_STACK_LINE(41)
				::haxe::zip::Huffman tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				int tmp6 = this->treeDepth(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(41)
				int db = tmp6;		HX_STACK_VAR(db,"db");
				HX_STACK_LINE(42)
				bool tmp7 = (da < db);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(42)
				if ((tmp7)){
					HX_STACK_LINE(42)
					tmp8 = da;
				}
				else{
					HX_STACK_LINE(42)
					tmp8 = db;
				}
				HX_STACK_LINE(42)
				tmp = ((int)1 + tmp8);
			}
		}
		;break;
	}
	HX_STACK_LINE(36)
	return tmp;
	HX_STACK_LINE(36)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeDepth,return )

::haxe::zip::Huffman HuffTools_obj::treeCompress( ::haxe::zip::Huffman t){
	HX_STACK_FRAME("haxe.zip.HuffTools","treeCompress",0x66340995,"haxe.zip.HuffTools.treeCompress","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Huffman.hx",46,0x9daf784f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(47)
	::haxe::zip::Huffman tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	int tmp1 = this->treeDepth(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	int d = tmp1;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(48)
	bool tmp2 = (d == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	if ((tmp2)){
		HX_STACK_LINE(49)
		::haxe::zip::Huffman tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		return tmp3;
	}
	HX_STACK_LINE(50)
	bool tmp3 = (d == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	if ((tmp3)){
		HX_STACK_LINE(51)
		::haxe::zip::Huffman tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		switch( (int)(t->__Index())){
			case (int)1: {
				HX_STACK_LINE(51)
				::haxe::zip::Huffman tmp5 = (::haxe::zip::Huffman(t))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				::haxe::zip::Huffman b = tmp5;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(51)
				::haxe::zip::Huffman tmp6 = (::haxe::zip::Huffman(t))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				::haxe::zip::Huffman a = tmp6;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					::haxe::zip::Huffman tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(52)
					::haxe::zip::Huffman tmp8 = this->treeCompress(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					::haxe::zip::Huffman tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					::haxe::zip::Huffman tmp10 = this->treeCompress(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					tmp4 = ::haxe::zip::Huffman_obj::NeedBit(tmp8,tmp10);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(53)
				HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
			}
		}
		HX_STACK_LINE(51)
		return tmp4;
	}
	HX_STACK_LINE(55)
	int tmp4 = (int((int)1) << int(d));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	int size = tmp4;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(56)
	Array< ::Dynamic > table = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(table,"table");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			bool tmp5 = (_g < size);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			if ((tmp6)){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(58)
			::haxe::zip::Huffman tmp8 = ::haxe::zip::Huffman_obj::Found((int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			table->push(tmp8);
		}
	}
	HX_STACK_LINE(59)
	int tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	::haxe::zip::Huffman tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	this->treeWalk(table,(int)0,(int)0,tmp5,tmp6);
	HX_STACK_LINE(60)
	int tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	::haxe::zip::Huffman tmp8 = ::haxe::zip::Huffman_obj::NeedBits(tmp7,table);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeCompress,return )

Void HuffTools_obj::treeWalk( Array< ::Dynamic > table,int p,int cd,int d,::haxe::zip::Huffman t){
{
		HX_STACK_FRAME("haxe.zip.HuffTools","treeWalk",0x2e5c697c,"haxe.zip.HuffTools.treeWalk","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Huffman.hx",64,0x9daf784f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(table,"table")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(cd,"cd")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(64)
		switch( (int)(t->__Index())){
			case (int)1: {
				HX_STACK_LINE(64)
				::haxe::zip::Huffman tmp = (::haxe::zip::Huffman(t))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(64)
				::haxe::zip::Huffman b = tmp;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(64)
				::haxe::zip::Huffman tmp1 = (::haxe::zip::Huffman(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(64)
				::haxe::zip::Huffman a = tmp1;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(66)
					bool tmp2 = (d > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(66)
					if ((tmp2)){
						HX_STACK_LINE(67)
						int tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(67)
						int tmp4 = (cd + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(67)
						int tmp5 = (d - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(67)
						::haxe::zip::Huffman tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(67)
						this->treeWalk(table,tmp3,tmp4,tmp5,tmp6);
						HX_STACK_LINE(68)
						int tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(68)
						int tmp8 = (int((int)1) << int(cd));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(68)
						int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(68)
						int tmp10 = (cd + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(68)
						int tmp11 = (d - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(68)
						::haxe::zip::Huffman tmp12 = b;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(68)
						this->treeWalk(table,tmp9,tmp10,tmp11,tmp12);
					}
					else{
						HX_STACK_LINE(70)
						::haxe::zip::Huffman tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(70)
						::haxe::zip::Huffman tmp4 = this->treeCompress(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(70)
						table[p] = tmp4;
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(72)
				::haxe::zip::Huffman tmp = t;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(72)
				::haxe::zip::Huffman tmp1 = this->treeCompress(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				table[p] = tmp1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(HuffTools_obj,treeWalk,(void))

::haxe::zip::Huffman HuffTools_obj::treeMake( ::haxe::ds::IntMap bits,int maxbits,int v,int len){
	HX_STACK_FRAME("haxe.zip.HuffTools","treeMake",0x27c04661,"haxe.zip.HuffTools.treeMake","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Huffman.hx",76,0x9daf784f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bits,"bits")
	HX_STACK_ARG(maxbits,"maxbits")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(77)
	bool tmp = (len > maxbits);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(77)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid huffman","\xe4","\xe4","\x8f","\xa6"));
	}
	HX_STACK_LINE(78)
	int tmp1 = (int(v) << int((int)5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	int idx = tmp3;		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(79)
	int tmp4 = idx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	bool tmp5 = bits->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	if ((tmp5)){
		HX_STACK_LINE(80)
		int tmp6 = idx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		Dynamic tmp7 = bits->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		::haxe::zip::Huffman tmp8 = ::haxe::zip::Huffman_obj::Found(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(80)
		return tmp8;
	}
	HX_STACK_LINE(81)
	hx::ShlEq(v,(int)1);
	HX_STACK_LINE(82)
	hx::AddEq(len,(int)1);
	HX_STACK_LINE(83)
	::haxe::ds::IntMap tmp6 = bits;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	int tmp7 = maxbits;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	int tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	::haxe::zip::Huffman tmp10 = this->treeMake(tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(83)
	::haxe::ds::IntMap tmp11 = bits;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(83)
	int tmp12 = maxbits;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(83)
	int tmp13 = (int(v) | int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(83)
	int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(83)
	::haxe::zip::Huffman tmp15 = this->treeMake(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(83)
	::haxe::zip::Huffman tmp16 = ::haxe::zip::Huffman_obj::NeedBit(tmp10,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(83)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,treeMake,return )

::haxe::zip::Huffman HuffTools_obj::make( Array< int > lengths,int pos,int nlengths,int maxbits){
	HX_STACK_FRAME("haxe.zip.HuffTools","make",0xc4121b63,"haxe.zip.HuffTools.make","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Huffman.hx",86,0x9daf784f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lengths,"lengths")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(nlengths,"nlengths")
	HX_STACK_ARG(maxbits,"maxbits")
	HX_STACK_LINE(87)
	Array< int > counts = Array_obj< int >::__new();		HX_STACK_VAR(counts,"counts");
	HX_STACK_LINE(88)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool tmp1 = (maxbits > (int)32);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	if ((tmp1)){
		HX_STACK_LINE(89)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid huffman","\xe4","\xe4","\x8f","\xa6"));
	}
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			bool tmp2 = (_g < maxbits);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			if ((tmp3)){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(91)
			counts->push((int)0);
			HX_STACK_LINE(92)
			tmp->push((int)0);
		}
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		while((true)){
			HX_STACK_LINE(94)
			bool tmp2 = (_g < nlengths);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			if ((tmp3)){
				HX_STACK_LINE(94)
				break;
			}
			HX_STACK_LINE(94)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(95)
			int tmp5 = (i + pos);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			int tmp6 = lengths->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			int p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(96)
			bool tmp7 = (p >= maxbits);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			if ((tmp7)){
				HX_STACK_LINE(96)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid huffman","\xe4","\xe4","\x8f","\xa6"));
			}
			HX_STACK_LINE(97)
			(counts[p])++;
		}
	}
	HX_STACK_LINE(99)
	int code = (int)0;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		int tmp2 = (maxbits - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			if ((tmp4)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(101)
			int tmp6 = code;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			int tmp7 = counts->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			int tmp9 = (int(tmp8) << int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			code = tmp9;
			HX_STACK_LINE(102)
			int tmp10 = code;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			tmp[i] = tmp10;
		}
	}
	HX_STACK_LINE(104)
	::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	::haxe::ds::IntMap bits = tmp2;		HX_STACK_VAR(bits,"bits");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			bool tmp3 = (_g < nlengths);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			if ((tmp4)){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(106)
			int tmp6 = (i + pos);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			int tmp7 = lengths->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			int l = tmp7;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(107)
			bool tmp8 = (l != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			if ((tmp8)){
				HX_STACK_LINE(108)
				int tmp9 = (l - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				int tmp10 = tmp->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				int n = tmp10;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(109)
				int tmp11 = (l - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				int tmp12 = (n + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				tmp[tmp11] = tmp12;
				HX_STACK_LINE(110)
				int tmp13 = (int(n) << int((int)5));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				int tmp14 = l;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(110)
				int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(110)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(110)
				bits->set(tmp15,tmp16);
			}
		}
	}
	HX_STACK_LINE(113)
	::haxe::ds::IntMap tmp3 = bits;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	int tmp4 = maxbits;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	::haxe::zip::Huffman tmp5 = this->treeMake(tmp3,tmp4,(int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	::haxe::ds::IntMap tmp6 = bits;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(113)
	int tmp7 = maxbits;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	::haxe::zip::Huffman tmp8 = this->treeMake(tmp6,tmp7,(int)1,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	::haxe::zip::Huffman tmp9 = ::haxe::zip::Huffman_obj::NeedBit(tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(113)
	::haxe::zip::Huffman tmp10 = this->treeCompress(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(113)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,make,return )


HuffTools_obj::HuffTools_obj()
{
}

Dynamic HuffTools_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeWalk") ) { return treeWalk_dyn(); }
		if (HX_FIELD_EQ(inName,"treeMake") ) { return treeMake_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeDepth") ) { return treeDepth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"treeCompress") ) { return treeCompress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("treeDepth","\xc5","\x12","\x35","\x42"),
	HX_HCSTRING("treeCompress","\x20","\x2b","\xda","\xa1"),
	HX_HCSTRING("treeWalk","\x87","\x29","\xba","\x32"),
	HX_HCSTRING("treeMake","\x6c","\x06","\x1e","\x2c"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HuffTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HuffTools_obj::__mClass,"__mClass");
};

#endif

hx::Class HuffTools_obj::__mClass;

void HuffTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.HuffTools","\x19","\xf3","\x2d","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HuffTools_obj >;
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
} // end namespace zip
