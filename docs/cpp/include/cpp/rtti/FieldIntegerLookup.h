#ifndef INCLUDED_cpp_rtti_FieldIntegerLookup
#define INCLUDED_cpp_rtti_FieldIntegerLookup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,rtti,FieldIntegerLookup)
namespace cpp{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  FieldIntegerLookup_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef FieldIntegerLookup_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class FieldIntegerLookup_delegate_ : public FieldIntegerLookup_obj
{
	protected:
		IMPL *mDelegate;
	public:
		FieldIntegerLookup_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace cpp
} // end namespace rtti

#endif /* INCLUDED_cpp_rtti_FieldIntegerLookup */ 
