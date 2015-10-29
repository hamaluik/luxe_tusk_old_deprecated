#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
namespace haxe{
namespace zip{

Void Reader_obj::__construct(::haxe::io::Input i)
{
HX_STACK_FRAME("haxe.zip.Reader","new",0xf101338a,"haxe.zip.Reader.new","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",32,0x0c8b1c7d)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
{
	HX_STACK_LINE(32)
	this->i = i;
}
;
	return null();
}

//Reader_obj::~Reader_obj() { }

Dynamic Reader_obj::__CreateEmpty() { return  new Reader_obj; }
hx::ObjectPtr< Reader_obj > Reader_obj::__new(::haxe::io::Input i)
{  hx::ObjectPtr< Reader_obj > _result_ = new Reader_obj();
	_result_->__construct(i);
	return _result_;}

Dynamic Reader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reader_obj > _result_ = new Reader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::Date Reader_obj::readZipDate( ){
	HX_STACK_FRAME("haxe.zip.Reader","readZipDate",0xa6a02623,"haxe.zip.Reader.readZipDate","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",35,0x0c8b1c7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::haxe::io::Input tmp = this->i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = tmp->readUInt16();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	int t = tmp1;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(37)
	int tmp2 = (int(t) >> int((int)11));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	int tmp3 = (int(tmp2) & int((int)31));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int hour = tmp3;		HX_STACK_VAR(hour,"hour");
	HX_STACK_LINE(38)
	int tmp4 = (int(t) >> int((int)5));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	int tmp5 = (int(tmp4) & int((int)63));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	int min = tmp5;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(39)
	int tmp6 = (int(t) & int((int)31));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	int sec = tmp6;		HX_STACK_VAR(sec,"sec");
	HX_STACK_LINE(40)
	::haxe::io::Input tmp7 = this->i;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	int tmp8 = tmp7->readUInt16();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	int d = tmp8;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(41)
	int tmp9 = (int(d) >> int((int)9));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(41)
	int year = tmp9;		HX_STACK_VAR(year,"year");
	HX_STACK_LINE(42)
	int tmp10 = (int(d) >> int((int)5));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(42)
	int tmp11 = (int(tmp10) & int((int)15));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(42)
	int month = tmp11;		HX_STACK_VAR(month,"month");
	HX_STACK_LINE(43)
	int tmp12 = (int(d) & int((int)31));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(43)
	int day = tmp12;		HX_STACK_VAR(day,"day");
	HX_STACK_LINE(44)
	int tmp13 = (year + (int)1980);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	int tmp14 = (month - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	int tmp15 = day;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	int tmp16 = hour;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(44)
	int tmp17 = min;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(44)
	int tmp18 = (int(sec) << int((int)1));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(44)
	::Date tmp19 = ::Date_obj::__new(tmp13,tmp14,tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(44)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readZipDate,return )

::List Reader_obj::readExtraFields( int length){
	HX_STACK_FRAME("haxe.zip.Reader","readExtraFields",0x48ea639d,"haxe.zip.Reader.readExtraFields","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",47,0x0c8b1c7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(48)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::List fields = tmp;		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(49)
	while((true)){
		HX_STACK_LINE(49)
		bool tmp1 = (length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		if ((tmp2)){
			HX_STACK_LINE(49)
			break;
		}
		HX_STACK_LINE(50)
		bool tmp3 = (length < (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(50)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid extra fields data","\x18","\x88","\xa4","\x23"));
		}
		HX_STACK_LINE(51)
		::haxe::io::Input tmp4 = this->i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int tmp5 = tmp4->readUInt16();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		int tag = tmp5;		HX_STACK_VAR(tag,"tag");
		HX_STACK_LINE(52)
		::haxe::io::Input tmp6 = this->i;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int tmp7 = tmp6->readUInt16();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int len = tmp7;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(53)
		bool tmp8 = (length < len);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		if ((tmp8)){
			HX_STACK_LINE(53)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid extra fields data","\x18","\x88","\xa4","\x23"));
		}
		HX_STACK_LINE(54)
		int tmp9 = tag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		switch( (int)(tmp9)){
			case (int)28789: {
				HX_STACK_LINE(56)
				::haxe::io::Input tmp10 = this->i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(56)
				int tmp11 = tmp10->readByte();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(56)
				int version = tmp11;		HX_STACK_VAR(version,"version");
				HX_STACK_LINE(57)
				bool tmp12 = (version != (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				if ((tmp12)){
					HX_STACK_LINE(58)
					::haxe::io::BytesBuffer tmp13 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(58)
					::haxe::io::BytesBuffer data = tmp13;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(59)
					{
						HX_STACK_LINE(59)
						int tmp14 = version;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(59)
						data->b->push(tmp14);
					}
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::haxe::io::Input tmp14 = this->i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						int tmp15 = (len - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						::haxe::io::Bytes tmp16 = tmp14->read(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						::haxe::io::Bytes src = tmp16;		HX_STACK_VAR(src,"src");
						HX_STACK_LINE(60)
						Array< unsigned char > b1 = data->b;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(60)
						Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(60)
							int _g = src->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(60)
							while((true)){
								HX_STACK_LINE(60)
								bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(60)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(60)
								if ((tmp18)){
									HX_STACK_LINE(60)
									break;
								}
								HX_STACK_LINE(60)
								int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(60)
								int i = tmp19;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(60)
								unsigned char tmp20 = b2->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(60)
								data->b->push(tmp20);
							}
						}
					}
					HX_STACK_LINE(61)
					int tmp14 = tag;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					::haxe::io::Bytes tmp15 = data->getBytes();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					::haxe::zip::ExtraField tmp16 = ::haxe::zip::ExtraField_obj::FUnknown(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					fields->add(tmp16);
				}
				else{
					HX_STACK_LINE(63)
					::haxe::io::Input tmp13 = this->i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					int tmp14 = tmp13->readInt32();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(63)
					int crc = tmp14;		HX_STACK_VAR(crc,"crc");
					HX_STACK_LINE(64)
					::haxe::io::Input tmp15 = this->i;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					int tmp16 = (len - (int)5);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					::haxe::io::Bytes tmp17 = tmp15->read(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(64)
					::String tmp18 = tmp17->toString();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(64)
					::String name = tmp18;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(65)
					::String tmp19 = name;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(65)
					int tmp20 = crc;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(65)
					::haxe::zip::ExtraField tmp21 = ::haxe::zip::ExtraField_obj::FInfoZipUnicodePath(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(65)
					fields->add(tmp21);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(68)
				int tmp10 = tag;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(68)
				::haxe::io::Input tmp11 = this->i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(68)
				int tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				::haxe::io::Bytes tmp13 = tmp11->read(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(68)
				::haxe::zip::ExtraField tmp14 = ::haxe::zip::ExtraField_obj::FUnknown(tmp10,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(68)
				fields->add(tmp14);
			}
		}
		HX_STACK_LINE(70)
		int tmp10 = ((int)4 + len);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(70)
		hx::SubEq(length,tmp10);
	}
	HX_STACK_LINE(72)
	::List tmp1 = fields;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readExtraFields,return )

Dynamic Reader_obj::readEntryHeader( ){
	HX_STACK_FRAME("haxe.zip.Reader","readEntryHeader",0x28765213,"haxe.zip.Reader.readEntryHeader","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",75,0x0c8b1c7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::haxe::io::Input tmp = this->i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	::haxe::io::Input i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(77)
	int tmp1 = i->readInt32();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	int h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(78)
	bool tmp2 = (h == (int)33639248);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	if ((tmp3)){
		HX_STACK_LINE(78)
		tmp4 = (h == (int)101010256);
	}
	else{
		HX_STACK_LINE(78)
		tmp4 = true;
	}
	HX_STACK_LINE(78)
	if ((tmp4)){
		HX_STACK_LINE(79)
		return null();
	}
	HX_STACK_LINE(80)
	bool tmp5 = (h != (int)67324752);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	if ((tmp5)){
		HX_STACK_LINE(81)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid Zip Data","\x72","\xda","\xff","\x99"));
	}
	HX_STACK_LINE(82)
	int tmp6 = i->readUInt16();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(82)
	int version = tmp6;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(83)
	int tmp7 = i->readUInt16();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	int flags = tmp7;		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(84)
	int tmp8 = (int(flags) & int((int)2048));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(84)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(84)
	bool utf8 = tmp9;		HX_STACK_VAR(utf8,"utf8");
	HX_STACK_LINE(85)
	int tmp10 = (int(flags) & int((int)63473));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(85)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(85)
	if ((tmp11)){
		HX_STACK_LINE(86)
		::String tmp12 = (HX_HCSTRING("Unsupported flags ","\x24","\x93","\x26","\xa4") + flags);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(86)
		HX_STACK_DO_THROW(tmp12);
	}
	HX_STACK_LINE(87)
	int tmp12 = i->readUInt16();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(87)
	int compression = tmp12;		HX_STACK_VAR(compression,"compression");
	HX_STACK_LINE(88)
	bool tmp13 = (compression != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(88)
	bool compressed = tmp13;		HX_STACK_VAR(compressed,"compressed");
	HX_STACK_LINE(89)
	bool tmp14 = compressed;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(89)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(89)
	if ((tmp14)){
		HX_STACK_LINE(89)
		tmp15 = (compression != (int)8);
	}
	else{
		HX_STACK_LINE(89)
		tmp15 = false;
	}
	HX_STACK_LINE(89)
	if ((tmp15)){
		HX_STACK_LINE(90)
		::String tmp16 = (HX_HCSTRING("Unsupported compression ","\x65","\x94","\x24","\x90") + compression);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(90)
		HX_STACK_DO_THROW(tmp16);
	}
	HX_STACK_LINE(91)
	::Date tmp16 = this->readZipDate();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(91)
	::Date mtime = tmp16;		HX_STACK_VAR(mtime,"mtime");
	HX_STACK_LINE(92)
	int tmp17 = i->readInt32();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(92)
	Dynamic crc32 = tmp17;		HX_STACK_VAR(crc32,"crc32");
	HX_STACK_LINE(93)
	int tmp18 = i->readInt32();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(93)
	int csize = tmp18;		HX_STACK_VAR(csize,"csize");
	HX_STACK_LINE(94)
	int tmp19 = i->readInt32();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(94)
	int usize = tmp19;		HX_STACK_VAR(usize,"usize");
	HX_STACK_LINE(95)
	int tmp20 = i->readInt16();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(95)
	int fnamelen = tmp20;		HX_STACK_VAR(fnamelen,"fnamelen");
	HX_STACK_LINE(96)
	int tmp21 = i->readInt16();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(96)
	int elen = tmp21;		HX_STACK_VAR(elen,"elen");
	HX_STACK_LINE(97)
	int tmp22 = fnamelen;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(97)
	::String tmp23 = i->readString(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(97)
	::String fname = tmp23;		HX_STACK_VAR(fname,"fname");
	HX_STACK_LINE(98)
	int tmp24 = elen;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(98)
	::List tmp25 = this->readExtraFields(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(98)
	::List fields = tmp25;		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(99)
	bool tmp26 = utf8;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(99)
	if ((tmp26)){
		HX_STACK_LINE(100)
		fields->push(::haxe::zip::ExtraField_obj::FUtf8);
	}
	HX_STACK_LINE(101)
	::haxe::io::Bytes data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(104)
	int tmp27 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(104)
	bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(104)
	if ((tmp28)){
		HX_STACK_LINE(105)
		crc32 = null();
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &compressed,int &csize,::Date &mtime,::String &fname,Dynamic &crc32,::haxe::io::Bytes &data,::List &fields,int &usize){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",106,0x0c8b1c7d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62") , fname,false);
				__result->Add(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65") , usize,false);
				__result->Add(HX_HCSTRING("fileTime","\xa9","\xb4","\x40","\x66") , mtime,false);
				__result->Add(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67") , compressed,false);
				__result->Add(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b") , csize,false);
				__result->Add(HX_HCSTRING("data","\x2a","\x56","\x63","\x42") , data,false);
				__result->Add(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c") , crc32,false);
				__result->Add(HX_HCSTRING("extraFields","\x29","\xe9","\x47","\x7f") , fields,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(106)
	Dynamic tmp29 = _Function_1_1::Block(compressed,csize,mtime,fname,crc32,data,fields,usize);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(106)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readEntryHeader,return )

::List Reader_obj::read( ){
	HX_STACK_FRAME("haxe.zip.Reader","read",0xf2b0acec,"haxe.zip.Reader.read","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",118,0x0c8b1c7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(120)
	Dynamic buf = null();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(121)
	::haxe::io::Bytes tmp1 = null();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	while((true)){
		HX_STACK_LINE(123)
		Dynamic tmp2 = this->readEntryHeader();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(124)
		bool tmp3 = (e == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		if ((tmp3)){
			HX_STACK_LINE(125)
			break;
		}
		HX_STACK_LINE(127)
		bool tmp4 = (e->__Field(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		if ((tmp4)){
			HX_STACK_LINE(128)
			bool tmp5 = e->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			if ((tmp5)){
				HX_STACK_LINE(160)
				int bufSize = (int)65536;		HX_STACK_VAR(bufSize,"bufSize");
				HX_STACK_LINE(161)
				bool tmp6 = (tmp1 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				if ((tmp6)){
					HX_STACK_LINE(162)
					int tmp7 = bufSize;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(162)
					::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					tmp1 = tmp8;
				}
				HX_STACK_LINE(163)
				::haxe::io::BytesBuffer tmp7 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(163)
				::haxe::io::BytesBuffer out = tmp7;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(164)
				::haxe::io::Input tmp8 = this->i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(164)
				::haxe::zip::InflateImpl tmp9 = ::haxe::zip::InflateImpl_obj::__new(tmp8,false,false);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(164)
				::haxe::zip::InflateImpl z = tmp9;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(165)
				while((true)){
					HX_STACK_LINE(166)
					::haxe::io::Bytes tmp10 = tmp1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(166)
					int tmp11 = bufSize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(166)
					int tmp12 = z->readBytes(tmp10,(int)0,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(166)
					int n = tmp12;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(167)
					{
						HX_STACK_LINE(167)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(167)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(167)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(167)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(167)
						if ((tmp15)){
							HX_STACK_LINE(167)
							tmp16 = (n < (int)0);
						}
						else{
							HX_STACK_LINE(167)
							tmp16 = true;
						}
						HX_STACK_LINE(167)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(167)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(167)
						if ((tmp17)){
							HX_STACK_LINE(167)
							int tmp19 = n;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(167)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(167)
							int tmp21 = tmp1->length;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(167)
							tmp18 = (tmp20 > tmp21);
						}
						else{
							HX_STACK_LINE(167)
							tmp18 = true;
						}
						HX_STACK_LINE(167)
						if ((tmp18)){
							HX_STACK_LINE(167)
							HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
						}
						HX_STACK_LINE(167)
						Array< unsigned char > b1 = out->b;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(167)
						Array< unsigned char > b2 = tmp1->b;		HX_STACK_VAR(b2,"b2");
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(167)
							int tmp19 = n;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(167)
							int _g = tmp19;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(167)
							while((true)){
								HX_STACK_LINE(167)
								bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(167)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(167)
								if ((tmp21)){
									HX_STACK_LINE(167)
									break;
								}
								HX_STACK_LINE(167)
								int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(167)
								int i = tmp22;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(167)
								unsigned char tmp23 = b2->__get(i);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(167)
								out->b->push(tmp23);
							}
						}
					}
					HX_STACK_LINE(168)
					bool tmp13 = (n < bufSize);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(168)
					if ((tmp13)){
						HX_STACK_LINE(169)
						break;
					}
				}
				HX_STACK_LINE(171)
				::haxe::io::Bytes tmp10 = out->getBytes();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(171)
				e->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = tmp10;
			}
			else{
				HX_STACK_LINE(174)
				::haxe::io::Input tmp6 = this->i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(174)
				int tmp7 = e->__Field(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				::haxe::io::Bytes tmp8 = tmp6->read(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(174)
				e->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = tmp8;
			}
			HX_STACK_LINE(175)
			::haxe::io::Input tmp6 = this->i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			int tmp7 = tmp6->readInt32();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			e->__FieldRef(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c")) = tmp7;
			HX_STACK_LINE(176)
			bool tmp8 = (e->__Field(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c"), hx::paccDynamic ) == (int)134695760);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			if ((tmp8)){
				HX_STACK_LINE(177)
				::haxe::io::Input tmp9 = this->i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				int tmp10 = tmp9->readInt32();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				e->__FieldRef(HX_HCSTRING("crc32","\x73","\x0c","\x51","\x4c")) = tmp10;
			}
			HX_STACK_LINE(178)
			::haxe::io::Input tmp9 = this->i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(178)
			int tmp10 = tmp9->readInt32();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(178)
			e->__FieldRef(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b")) = tmp10;
			HX_STACK_LINE(179)
			::haxe::io::Input tmp11 = this->i;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			int tmp12 = tmp11->readInt32();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			e->__FieldRef(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65")) = tmp12;
			HX_STACK_LINE(181)
			e->__FieldRef(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b")) = e->__Field(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65"), hx::paccDynamic );
			HX_STACK_LINE(182)
			e->__FieldRef(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67")) = false;
		}
		else{
			HX_STACK_LINE(184)
			::haxe::io::Input tmp5 = this->i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			int tmp6 = e->__Field(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			::haxe::io::Bytes tmp7 = tmp5->read(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(184)
			e->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = tmp7;
		}
		HX_STACK_LINE(185)
		Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		l->add(tmp5);
	}
	HX_STACK_LINE(187)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

::List Reader_obj::readZip( ::haxe::io::Input i){
	HX_STACK_FRAME("haxe.zip.Reader","readZip",0x2845d555,"haxe.zip.Reader.readZip","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",190,0x0c8b1c7d)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(191)
	::haxe::zip::Reader tmp = ::haxe::zip::Reader_obj::__new(i);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	::haxe::zip::Reader r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(192)
	::List tmp1 = r->read();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readZip,return )

::haxe::io::Bytes Reader_obj::unzip( Dynamic f){
	HX_STACK_FRAME("haxe.zip.Reader","unzip",0x282047d2,"haxe.zip.Reader.unzip","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Reader.hx",195,0x0c8b1c7d)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(196)
	bool tmp = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	if ((tmp1)){
		HX_STACK_LINE(197)
		::haxe::io::Bytes tmp2 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		return tmp2;
	}
	HX_STACK_LINE(198)
	::haxe::zip::Uncompress tmp2 = ::haxe::zip::Uncompress_obj::__new((int)-15);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	::haxe::zip::Uncompress c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(199)
	int tmp3 = f->__Field(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	::haxe::io::Bytes s = tmp4;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(200)
	::haxe::io::Bytes tmp5 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(200)
	::haxe::io::Bytes tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	Dynamic tmp7 = c->execute(tmp5,(int)0,tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(200)
	Dynamic r = tmp7;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(201)
	c->close();
	HX_STACK_LINE(202)
	bool tmp8 = r->__Field(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(202)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(202)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(202)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(202)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(202)
	if ((tmp12)){
		HX_STACK_LINE(202)
		int tmp14 = r->__Field(HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(202)
		int tmp15 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(202)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(202)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(202)
		tmp13 = (tmp14 != tmp17);
	}
	else{
		HX_STACK_LINE(202)
		tmp13 = true;
	}
	HX_STACK_LINE(202)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(202)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(202)
	if ((tmp14)){
		HX_STACK_LINE(202)
		tmp15 = (r->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic ) != f->__Field(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65"), hx::paccDynamic ));
	}
	else{
		HX_STACK_LINE(202)
		tmp15 = true;
	}
	HX_STACK_LINE(202)
	if ((tmp15)){
		HX_STACK_LINE(203)
		::String tmp16 = (HX_HCSTRING("Invalid compressed data for ","\x37","\x5a","\x72","\x7b") + f->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(203)
		HX_STACK_DO_THROW(tmp16);
	}
	HX_STACK_LINE(204)
	f->__FieldRef(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67")) = false;
	HX_STACK_LINE(205)
	f->__FieldRef(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b")) = f->__Field(HX_HCSTRING("fileSize","\x5d","\x89","\x97","\x65"), hx::paccDynamic );
	HX_STACK_LINE(206)
	f->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = s;
	HX_STACK_LINE(207)
	::haxe::io::Bytes tmp16 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(207)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,unzip,return )


Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

Dynamic Reader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readZipDate") ) { return readZipDate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readExtraFields") ) { return readExtraFields_dyn(); }
		if (HX_FIELD_EQ(inName,"readEntryHeader") ) { return readEntryHeader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"unzip") ) { outValue = unzip_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readZip") ) { outValue = readZip_dyn(); return true;  }
	}
	return false;
}

Dynamic Reader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Reader_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("readZipDate","\xf9","\x88","\xbc","\xc9"),
	HX_HCSTRING("readExtraFields","\x73","\xe9","\x9f","\xa6"),
	HX_HCSTRING("readEntryHeader","\xe9","\xd7","\x2b","\x86"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#endif

hx::Class Reader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("readZip","\x2b","\x95","\xd6","\x02"),
	HX_HCSTRING("unzip","\x28","\x46","\xf4","\xa6"),
	::String(null()) };

void Reader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Reader","\x98","\x66","\x32","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Reader_obj >;
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
