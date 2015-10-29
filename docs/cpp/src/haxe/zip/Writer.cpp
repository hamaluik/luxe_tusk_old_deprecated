#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_crypto_Crc32
#include <haxe/crypto/Crc32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
#ifndef INCLUDED_haxe_zip_Writer
#include <haxe/zip/Writer.h>
#endif
namespace haxe{
namespace zip{

Void Writer_obj::__construct(::haxe::io::Output o)
{
HX_STACK_FRAME("haxe.zip.Writer","new",0xcba2dcfa,"haxe.zip.Writer.new","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Writer.hx",45,0xc533710d)
HX_STACK_THIS(this)
HX_STACK_ARG(o,"o")
{
	HX_STACK_LINE(46)
	this->o = o;
	HX_STACK_LINE(47)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	this->files = tmp;
}
;
	return null();
}

//Writer_obj::~Writer_obj() { }

Dynamic Writer_obj::__CreateEmpty() { return  new Writer_obj; }
hx::ObjectPtr< Writer_obj > Writer_obj::__new(::haxe::io::Output o)
{  hx::ObjectPtr< Writer_obj > _result_ = new Writer_obj();
	_result_->__construct(o);
	return _result_;}

Dynamic Writer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Writer_obj > _result_ = new Writer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Writer_obj::writeZipDate( ::Date date){
{
		HX_STACK_FRAME("haxe.zip.Writer","writeZipDate",0x393b2ab6,"haxe.zip.Writer.writeZipDate","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Writer.hx",50,0xc533710d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(date,"date")
		HX_STACK_LINE(51)
		int tmp = date->getHours();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int hour = tmp;		HX_STACK_VAR(hour,"hour");
		HX_STACK_LINE(52)
		int tmp1 = date->getMinutes();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int min = tmp1;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(53)
		int tmp2 = date->getSeconds();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		int tmp3 = (int(tmp2) >> int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		int sec = tmp3;		HX_STACK_VAR(sec,"sec");
		HX_STACK_LINE(54)
		::haxe::io::Output tmp4 = this->o;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		int tmp5 = (int(hour) << int((int)11));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		int tmp6 = (int(min) << int((int)5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		int tmp8 = sec;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		tmp4->writeUInt16(tmp9);
		HX_STACK_LINE(55)
		int tmp10 = date->getFullYear();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		int tmp11 = (tmp10 - (int)1980);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		int year = tmp11;		HX_STACK_VAR(year,"year");
		HX_STACK_LINE(56)
		int tmp12 = date->getMonth();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(56)
		int month = tmp13;		HX_STACK_VAR(month,"month");
		HX_STACK_LINE(57)
		int tmp14 = date->getDate();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(57)
		int day = tmp14;		HX_STACK_VAR(day,"day");
		HX_STACK_LINE(58)
		::haxe::io::Output tmp15 = this->o;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(58)
		int tmp16 = (int(year) << int((int)9));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(58)
		int tmp17 = (int(month) << int((int)5));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(58)
		int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(58)
		int tmp19 = day;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(58)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(58)
		tmp15->writeUInt16(tmp20);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeZipDate,(void))

Void Writer_obj::writeEntryHeader( Dynamic f){
{
		HX_STACK_FRAME("haxe.zip.Writer","writeEntryHeader",0xe2ca9c26,"haxe.zip.Writer.writeEntryHeader","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Writer.hx",61,0xc533710d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(62)
		::haxe::io::Output tmp = this->o;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::haxe::io::Output o = tmp;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(63)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(64)
		bool tmp1 = (f->__Field(HX_HCSTRING("extraFields","\x29","\xe9","\x47","\x7f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(65)
			::_List::ListIterator tmp2 = ::_List::ListIterator_obj::__new(f->__Field(HX_HCSTRING("extraFields","\x29","\xe9","\x47","\x7f"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			::_List::ListIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				bool tmp3 = (_g->head != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(65)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				if ((tmp4)){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					Dynamic tmp6 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(65)
					_g->val = tmp6;
					HX_STACK_LINE(65)
					Dynamic tmp7 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(65)
					_g->head = tmp7;
					HX_STACK_LINE(65)
					tmp5 = _g->val;
				}
				HX_STACK_LINE(65)
				::haxe::zip::ExtraField e = ((::haxe::zip::ExtraField)(tmp5));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(66)
				switch( (int)(e->__Index())){
					case (int)2: {
						HX_STACK_LINE(67)
						hx::OrEq(flags,(int)2048);
					}
					;break;
					default: {
					}
				}
			}
		}
		HX_STACK_LINE(71)
		o->writeInt32((int)67324752);
		HX_STACK_LINE(72)
		o->writeUInt16((int)20);
		HX_STACK_LINE(73)
		int tmp2 = flags;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		o->writeUInt16(tmp2);
		HX_STACK_LINE(74)
		bool tmp3 = (f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(75)
			f->__FieldRef(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65")) = (int)0;
			HX_STACK_LINE(76)
			f->__FieldRef(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b")) = (int)0;
			HX_STACK_LINE(77)
			f->__FieldRef(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c")) = (int)0;
			HX_STACK_LINE(78)
			f->__FieldRef(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67")) = false;
			HX_STACK_LINE(79)
			::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			f->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = tmp4;
		}
		else{
			HX_STACK_LINE(81)
			bool tmp4 = (f->__Field(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			if ((tmp4)){
				HX_STACK_LINE(82)
				bool tmp5 = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				if ((tmp5)){
					HX_STACK_LINE(82)
					HX_STACK_DO_THROW(HX_HCSTRING("CRC32 must be processed before compression","\xea","\xf9","\x2a","\x51"));
				}
				HX_STACK_LINE(83)
				::haxe::io::Bytes tmp6 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				int tmp7 = ::haxe::crypto::Crc32_obj::make(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				f->__FieldRef(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c")) = tmp7;
			}
			HX_STACK_LINE(85)
			bool tmp5 = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			if ((tmp6)){
				HX_STACK_LINE(86)
				int tmp7 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				f->__FieldRef(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65")) = tmp7;
			}
			HX_STACK_LINE(87)
			int tmp7 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			f->__FieldRef(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b")) = tmp7;
		}
		HX_STACK_LINE(89)
		bool tmp4 = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		if ((tmp4)){
			HX_STACK_LINE(89)
			tmp5 = (int)8;
		}
		else{
			HX_STACK_LINE(89)
			tmp5 = (int)0;
		}
		HX_STACK_LINE(89)
		o->writeUInt16(tmp5);
		HX_STACK_LINE(90)
		::Date tmp6 = f->__Field(HX_HCSTRING("fileTime","\xa9","\xb4","\x40","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		this->writeZipDate(tmp6);
		HX_STACK_LINE(91)
		Dynamic tmp7 = f->__Field(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		o->writeInt32(tmp7);
		HX_STACK_LINE(92)
		int tmp8 = f->__Field(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		o->writeInt32(tmp8);
		HX_STACK_LINE(93)
		int tmp9 = f->__Field(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		o->writeInt32(tmp9);
		HX_STACK_LINE(94)
		int tmp10 = f->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		o->writeUInt16(tmp10);
		HX_STACK_LINE(95)
		::haxe::io::BytesOutput tmp11 = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		::haxe::io::BytesOutput e = tmp11;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(96)
		bool tmp12 = (f->__Field(HX_HCSTRING("extraFields","\x29","\xe9","\x47","\x7f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		if ((tmp12)){
			HX_STACK_LINE(97)
			::_List::ListIterator tmp13 = ::_List::ListIterator_obj::__new(f->__Field(HX_HCSTRING("extraFields","\x29","\xe9","\x47","\x7f"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			::_List::ListIterator _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			while((true)){
				HX_STACK_LINE(97)
				bool tmp14 = (_g->head != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(97)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(97)
				if ((tmp15)){
					HX_STACK_LINE(97)
					break;
				}
				HX_STACK_LINE(97)
				Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					Dynamic tmp17 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(97)
					_g->val = tmp17;
					HX_STACK_LINE(97)
					Dynamic tmp18 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(97)
					_g->head = tmp18;
					HX_STACK_LINE(97)
					tmp16 = _g->val;
				}
				HX_STACK_LINE(97)
				::haxe::zip::ExtraField f1 = ((::haxe::zip::ExtraField)(tmp16));		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(98)
				switch( (int)(f1->__Index())){
					case (int)1: {
						HX_STACK_LINE(98)
						int tmp17 = (::haxe::zip::ExtraField(f1))->__Param(1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(98)
						int crc = tmp17;		HX_STACK_VAR(crc,"crc");
						HX_STACK_LINE(98)
						::String tmp18 = (::haxe::zip::ExtraField(f1))->__Param(0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(98)
						::String name = tmp18;		HX_STACK_VAR(name,"name");
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(100)
							::String tmp19 = name;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(100)
							::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::ofString(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(100)
							::haxe::io::Bytes namebytes = tmp20;		HX_STACK_VAR(namebytes,"namebytes");
							HX_STACK_LINE(101)
							e->writeUInt16((int)28789);
							HX_STACK_LINE(102)
							int tmp21 = (namebytes->length + (int)5);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(102)
							e->writeUInt16(tmp21);
							HX_STACK_LINE(103)
							e->writeByte((int)1);
							HX_STACK_LINE(104)
							int tmp22 = crc;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(104)
							e->writeInt32(tmp22);
							HX_STACK_LINE(105)
							::haxe::io::Bytes tmp23 = namebytes;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(105)
							e->write(tmp23);
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(98)
						::haxe::io::Bytes tmp17 = (::haxe::zip::ExtraField(f1))->__Param(1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(98)
						::haxe::io::Bytes bytes = tmp17;		HX_STACK_VAR(bytes,"bytes");
						HX_STACK_LINE(98)
						int tmp18 = (::haxe::zip::ExtraField(f1))->__Param(0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(98)
						int tag = tmp18;		HX_STACK_VAR(tag,"tag");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(107)
							int tmp19 = tag;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(107)
							e->writeUInt16(tmp19);
							HX_STACK_LINE(108)
							int tmp20 = bytes->length;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(108)
							e->writeUInt16(tmp20);
							HX_STACK_LINE(109)
							::haxe::io::Bytes tmp21 = bytes;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(109)
							e->write(tmp21);
						}
					}
					;break;
					case (int)2: {
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(114)
		::haxe::io::Bytes tmp13 = e->getBytes();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(114)
		::haxe::io::Bytes ebytes = tmp13;		HX_STACK_VAR(ebytes,"ebytes");
		HX_STACK_LINE(115)
		int tmp14 = ebytes->length;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(115)
		o->writeUInt16(tmp14);
		HX_STACK_LINE(116)
		::String tmp15 = f->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(116)
		o->writeString(tmp15);
		HX_STACK_LINE(117)
		::haxe::io::Bytes tmp16 = ebytes;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(117)
		o->write(tmp16);
		HX_STACK_LINE(118)
		::List tmp17 = this->files;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(118)
		::String tmp18 = f->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(118)
		bool tmp19 = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(118)
		int tmp20 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(118)
		int tmp21 = f->__Field(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(118)
		Dynamic tmp22 = f->__Field(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(118)
		::Date tmp23 = f->__Field(HX_HCSTRING("fileTime","\xa9","\xb4","\x40","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(118)
		::haxe::io::Bytes tmp24 = ebytes;		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp22,int &tmp20,bool &tmp19,::Date &tmp23,int &tmp21,::haxe::io::Bytes &tmp24,::String &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Writer.hx",118,0xc533710d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp18,false);
					__result->Add(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67") , tmp19,false);
					__result->Add(HX_HCSTRING("clen","\x52","\x6b","\xc2","\x41") , tmp20,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp21,false);
					__result->Add(HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00") , tmp22,false);
					__result->Add(HX_HCSTRING("date","\x2e","\x56","\x63","\x42") , tmp23,false);
					__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , tmp24,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(118)
		Dynamic tmp25 = _Function_1_1::Block(tmp22,tmp20,tmp19,tmp23,tmp21,tmp24,tmp18);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(118)
		tmp17->add(tmp25);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeEntryHeader,(void))

Void Writer_obj::write( ::List files){
{
		HX_STACK_FRAME("haxe.zip.Writer","write",0x56f853f9,"haxe.zip.Writer.write","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Writer.hx",121,0xc533710d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(files,"files")
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::_List::ListIterator tmp = ::_List::ListIterator_obj::__new(files->h);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(122)
			::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			while((true)){
				HX_STACK_LINE(122)
				bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(122)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				if ((tmp2)){
					HX_STACK_LINE(122)
					break;
				}
				HX_STACK_LINE(122)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(122)
					_g->val = tmp4;
					HX_STACK_LINE(122)
					Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(122)
					_g->head = tmp5;
					HX_STACK_LINE(122)
					tmp3 = _g->val;
				}
				HX_STACK_LINE(122)
				Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(123)
				Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(123)
				this->writeEntryHeader(tmp4);
				HX_STACK_LINE(124)
				::haxe::io::Output tmp5 = this->o;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				::haxe::io::Bytes tmp6 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(124)
				int tmp7 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				tmp5->writeFullBytes(tmp6,(int)0,tmp7);
			}
		}
		HX_STACK_LINE(126)
		this->writeCDR();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))

Void Writer_obj::writeCDR( ){
{
		HX_STACK_FRAME("haxe.zip.Writer","writeCDR",0xd586c038,"haxe.zip.Writer.writeCDR","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Writer.hx",129,0xc533710d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		int cdr_size = (int)0;		HX_STACK_VAR(cdr_size,"cdr_size");
		HX_STACK_LINE(131)
		int cdr_offset = (int)0;		HX_STACK_VAR(cdr_offset,"cdr_offset");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::List tmp = this->files;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				if ((tmp3)){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(132)
					_g->val = tmp5;
					HX_STACK_LINE(132)
					Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					_g->head = tmp6;
					HX_STACK_LINE(132)
					tmp4 = _g->val;
				}
				HX_STACK_LINE(132)
				Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(133)
				int tmp5 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(133)
				int namelen = tmp5;		HX_STACK_VAR(namelen,"namelen");
				HX_STACK_LINE(134)
				int tmp6 = f->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				int extraFieldsLength = tmp6;		HX_STACK_VAR(extraFieldsLength,"extraFieldsLength");
				HX_STACK_LINE(135)
				::haxe::io::Output tmp7 = this->o;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				tmp7->writeInt32((int)33639248);
				HX_STACK_LINE(136)
				::haxe::io::Output tmp8 = this->o;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				tmp8->writeUInt16((int)20);
				HX_STACK_LINE(137)
				::haxe::io::Output tmp9 = this->o;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(137)
				tmp9->writeUInt16((int)20);
				HX_STACK_LINE(138)
				::haxe::io::Output tmp10 = this->o;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(138)
				tmp10->writeUInt16((int)0);
				HX_STACK_LINE(139)
				::haxe::io::Output tmp11 = this->o;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(139)
				bool tmp12 = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(139)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(139)
				if ((tmp12)){
					HX_STACK_LINE(139)
					tmp13 = (int)8;
				}
				else{
					HX_STACK_LINE(139)
					tmp13 = (int)0;
				}
				HX_STACK_LINE(139)
				tmp11->writeUInt16(tmp13);
				HX_STACK_LINE(140)
				::Date tmp14 = f->__Field(HX_HCSTRING("date","\x2e","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(140)
				this->writeZipDate(tmp14);
				HX_STACK_LINE(141)
				::haxe::io::Output tmp15 = this->o;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				int tmp16 = f->__Field(HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(141)
				tmp15->writeInt32(tmp16);
				HX_STACK_LINE(142)
				::haxe::io::Output tmp17 = this->o;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(142)
				int tmp18 = f->__Field(HX_HCSTRING("clen","\x52","\x6b","\xc2","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(142)
				tmp17->writeInt32(tmp18);
				HX_STACK_LINE(143)
				::haxe::io::Output tmp19 = this->o;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(143)
				int tmp20 = f->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(143)
				tmp19->writeInt32(tmp20);
				HX_STACK_LINE(144)
				::haxe::io::Output tmp21 = this->o;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(144)
				int tmp22 = namelen;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(144)
				tmp21->writeUInt16(tmp22);
				HX_STACK_LINE(145)
				::haxe::io::Output tmp23 = this->o;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(145)
				int tmp24 = extraFieldsLength;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(145)
				tmp23->writeUInt16(tmp24);
				HX_STACK_LINE(146)
				::haxe::io::Output tmp25 = this->o;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(146)
				tmp25->writeUInt16((int)0);
				HX_STACK_LINE(147)
				::haxe::io::Output tmp26 = this->o;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(147)
				tmp26->writeUInt16((int)0);
				HX_STACK_LINE(148)
				::haxe::io::Output tmp27 = this->o;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				tmp27->writeUInt16((int)0);
				HX_STACK_LINE(149)
				::haxe::io::Output tmp28 = this->o;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(149)
				tmp28->writeInt32((int)0);
				HX_STACK_LINE(150)
				::haxe::io::Output tmp29 = this->o;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(150)
				int tmp30 = cdr_offset;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(150)
				tmp29->writeInt32(tmp30);
				HX_STACK_LINE(151)
				::haxe::io::Output tmp31 = this->o;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(151)
				::String tmp32 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(151)
				tmp31->writeString(tmp32);
				HX_STACK_LINE(152)
				::haxe::io::Output tmp33 = this->o;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(152)
				::haxe::io::Bytes tmp34 = f->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(152)
				tmp33->write(tmp34);
				HX_STACK_LINE(153)
				int tmp35 = ((int)46 + namelen);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(153)
				int tmp36 = extraFieldsLength;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(153)
				int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(153)
				hx::AddEq(cdr_size,tmp37);
				HX_STACK_LINE(154)
				int tmp38 = ((int)30 + namelen);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(154)
				int tmp39 = extraFieldsLength;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(154)
				int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(154)
				int tmp41 = f->__Field(HX_HCSTRING("clen","\x52","\x6b","\xc2","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(154)
				int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(154)
				hx::AddEq(cdr_offset,tmp42);
			}
		}
		HX_STACK_LINE(157)
		::haxe::io::Output tmp = this->o;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		tmp->writeInt32((int)101010256);
		HX_STACK_LINE(159)
		::haxe::io::Output tmp1 = this->o;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		tmp1->writeUInt16((int)0);
		HX_STACK_LINE(161)
		::haxe::io::Output tmp2 = this->o;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		tmp2->writeUInt16((int)0);
		HX_STACK_LINE(163)
		::haxe::io::Output tmp3 = this->o;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		::List tmp4 = this->files;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		tmp3->writeUInt16(tmp5);
		HX_STACK_LINE(165)
		::haxe::io::Output tmp6 = this->o;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		::List tmp7 = this->files;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(165)
		tmp6->writeUInt16(tmp8);
		HX_STACK_LINE(167)
		::haxe::io::Output tmp9 = this->o;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(167)
		int tmp10 = cdr_size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		tmp9->writeInt32(tmp10);
		HX_STACK_LINE(169)
		::haxe::io::Output tmp11 = this->o;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(169)
		int tmp12 = cdr_offset;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(169)
		tmp11->writeInt32(tmp12);
		HX_STACK_LINE(171)
		::haxe::io::Output tmp13 = this->o;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(171)
		tmp13->writeUInt16((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,writeCDR,(void))

int Writer_obj::CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE;

int Writer_obj::LOCAL_FILE_HEADER_FIELDS_SIZE;


Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(files,"files");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(files,"files");
}

Dynamic Writer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { return files; }
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"writeCDR") ) { return writeCDR_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"writeZipDate") ) { return writeZipDate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeEntryHeader") ) { return writeEntryHeader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Writer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { files=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("files","\x77","\xde","\x98","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Writer_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Writer_obj,files),HX_HCSTRING("files","\x77","\xde","\x98","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Writer_obj::CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE,HX_HCSTRING("CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE","\xf5","\xbd","\x11","\x77")},
	{hx::fsInt,(void *) &Writer_obj::LOCAL_FILE_HEADER_FIELDS_SIZE,HX_HCSTRING("LOCAL_FILE_HEADER_FIELDS_SIZE","\x84","\x97","\xc0","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("files","\x77","\xde","\x98","\x00"),
	HX_HCSTRING("writeZipDate","\x90","\x9a","\xff","\x3b"),
	HX_HCSTRING("writeEntryHeader","\x00","\x01","\x4d","\x97"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("writeCDR","\x12","\xbb","\xeb","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Writer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Writer_obj::CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE,"CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE");
	HX_MARK_MEMBER_NAME(Writer_obj::LOCAL_FILE_HEADER_FIELDS_SIZE,"LOCAL_FILE_HEADER_FIELDS_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Writer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Writer_obj::CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE,"CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE");
	HX_VISIT_MEMBER_NAME(Writer_obj::LOCAL_FILE_HEADER_FIELDS_SIZE,"LOCAL_FILE_HEADER_FIELDS_SIZE");
};

#endif

hx::Class Writer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE","\xf5","\xbd","\x11","\x77"),
	HX_HCSTRING("LOCAL_FILE_HEADER_FIELDS_SIZE","\x84","\x97","\xc0","\x94"),
	::String(null()) };

void Writer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Writer","\x08","\x98","\x86","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Writer_obj >;
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

void Writer_obj::__boot()
{
	CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE= (int)46;
	LOCAL_FILE_HEADER_FIELDS_SIZE= (int)30;
}

} // end namespace haxe
} // end namespace zip
