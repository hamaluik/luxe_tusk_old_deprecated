#ifndef INCLUDED_tusk_lib_proc_SoundProcessor
#define INCLUDED_tusk_lib_proc_SoundProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_Processor
#include <tusk/Processor.h>
#endif
HX_DECLARE_CLASS1(tusk,Entity)
HX_DECLARE_CLASS1(tusk,Processor)
HX_DECLARE_CLASS3(tusk,lib,proc,SoundProcessor)
namespace tusk{
namespace lib{
namespace proc{


class HXCPP_CLASS_ATTRIBUTES  SoundProcessor_obj : public ::tusk::Processor_obj{
	public:
		typedef ::tusk::Processor_obj super;
		typedef SoundProcessor_obj OBJ_;
		SoundProcessor_obj();
		Void __construct(Array< ::Dynamic > entities);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.lib.proc.SoundProcessor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundProcessor_obj > __new(Array< ::Dynamic > entities);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundProcessor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundProcessor","\xa3","\x12","\xad","\x5a"); }

		virtual Void onUpdate( Dynamic data);

		virtual Void ___connectRoutes( );

		virtual Void ___disconnectRoutes( );

};

} // end namespace tusk
} // end namespace lib
} // end namespace proc

#endif /* INCLUDED_tusk_lib_proc_SoundProcessor */ 
