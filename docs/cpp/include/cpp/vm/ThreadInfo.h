#ifndef INCLUDED_cpp_vm_ThreadInfo
#define INCLUDED_cpp_vm_ThreadInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,StackFrame)
HX_DECLARE_CLASS2(cpp,vm,ThreadInfo)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  ThreadInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ThreadInfo_obj OBJ_;
		ThreadInfo_obj();
		Void __construct(int number,int status,hx::Null< int >  __o_breakpoint,::String criticalErrorDescription);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.vm.ThreadInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ThreadInfo_obj > __new(int number,int status,hx::Null< int >  __o_breakpoint,::String criticalErrorDescription);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThreadInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ThreadInfo","\x78","\x10","\x35","\x38"); }

		static void __boot();
		static int STATUS_RUNNING;
		static int STATUS_STOPPED_BREAK_IMMEDIATE;
		static int STATUS_STOPPED_BREAKPOINT;
		static int STATUS_STOPPED_UNCAUGHT_EXCEPTION;
		static int STATUS_STOPPED_CRITICAL_ERROR;
		int number;
		int status;
		int breakpoint;
		::String criticalErrorDescription;
		Array< ::Dynamic > stack;
};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_ThreadInfo */ 
