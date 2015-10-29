#ifndef INCLUDED_tusk_lib_proc_CameraProcessor
#define INCLUDED_tusk_lib_proc_CameraProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_Processor
#include <tusk/Processor.h>
#endif
HX_DECLARE_CLASS1(tusk,Entity)
HX_DECLARE_CLASS1(tusk,Processor)
HX_DECLARE_CLASS3(tusk,lib,proc,CameraProcessor)
namespace tusk{
namespace lib{
namespace proc{


class HXCPP_CLASS_ATTRIBUTES  CameraProcessor_obj : public ::tusk::Processor_obj{
	public:
		typedef ::tusk::Processor_obj super;
		typedef CameraProcessor_obj OBJ_;
		CameraProcessor_obj();
		Void __construct(Array< ::Dynamic > entities);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.lib.proc.CameraProcessor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CameraProcessor_obj > __new(Array< ::Dynamic > entities);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraProcessor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CameraProcessor","\xcd","\xe1","\x24","\x19"); }

		virtual Void onUpdate( Dynamic data);

		virtual Void ___connectRoutes( );

		virtual Void ___disconnectRoutes( );

};

} // end namespace tusk
} // end namespace lib
} // end namespace proc

#endif /* INCLUDED_tusk_lib_proc_CameraProcessor */ 
