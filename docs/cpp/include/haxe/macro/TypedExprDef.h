#ifndef INCLUDED_haxe_macro_TypedExprDef
#define INCLUDED_haxe_macro_TypedExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS2(haxe,macro,FieldAccess)
HX_DECLARE_CLASS2(haxe,macro,ModuleType)
HX_DECLARE_CLASS2(haxe,macro,TConstant)
HX_DECLARE_CLASS2(haxe,macro,Type)
HX_DECLARE_CLASS2(haxe,macro,TypedExprDef)
HX_DECLARE_CLASS2(haxe,macro,Unop)
namespace haxe{
namespace macro{


class TypedExprDef_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TypedExprDef_obj OBJ_;

	public:
		TypedExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.TypedExprDef","\x50","\x0d","\x10","\x77"); }
		::String __ToString() const { return HX_HCSTRING("TypedExprDef.","\x08","\xb1","\x2f","\x1d") + tag; }

		static ::haxe::macro::TypedExprDef TArray(Dynamic e1,Dynamic e2);
		static Dynamic TArray_dyn();
		static ::haxe::macro::TypedExprDef TArrayDecl(cpp::ArrayBase el);
		static Dynamic TArrayDecl_dyn();
		static ::haxe::macro::TypedExprDef TBinop(::haxe::macro::Binop op,Dynamic e1,Dynamic e2);
		static Dynamic TBinop_dyn();
		static ::haxe::macro::TypedExprDef TBlock(cpp::ArrayBase el);
		static Dynamic TBlock_dyn();
		static ::haxe::macro::TypedExprDef TBreak;
		static inline ::haxe::macro::TypedExprDef TBreak_dyn() { return TBreak; }
		static ::haxe::macro::TypedExprDef TCall(Dynamic e,cpp::ArrayBase el);
		static Dynamic TCall_dyn();
		static ::haxe::macro::TypedExprDef TCast(Dynamic e,::haxe::macro::ModuleType m);
		static Dynamic TCast_dyn();
		static ::haxe::macro::TypedExprDef TConst(::haxe::macro::TConstant c);
		static Dynamic TConst_dyn();
		static ::haxe::macro::TypedExprDef TContinue;
		static inline ::haxe::macro::TypedExprDef TContinue_dyn() { return TContinue; }
		static ::haxe::macro::TypedExprDef TEnumParameter(Dynamic e1,Dynamic ef,int index);
		static Dynamic TEnumParameter_dyn();
		static ::haxe::macro::TypedExprDef TField(Dynamic e,::haxe::macro::FieldAccess fa);
		static Dynamic TField_dyn();
		static ::haxe::macro::TypedExprDef TFor(Dynamic v,Dynamic e1,Dynamic e2);
		static Dynamic TFor_dyn();
		static ::haxe::macro::TypedExprDef TFunction(Dynamic tfunc);
		static Dynamic TFunction_dyn();
		static ::haxe::macro::TypedExprDef TIf(Dynamic econd,Dynamic eif,Dynamic eelse);
		static Dynamic TIf_dyn();
		static ::haxe::macro::TypedExprDef TLocal(Dynamic v);
		static Dynamic TLocal_dyn();
		static ::haxe::macro::TypedExprDef TMeta(Dynamic m,Dynamic e1);
		static Dynamic TMeta_dyn();
		static ::haxe::macro::TypedExprDef TNew(Dynamic c,Array< ::Dynamic > params,cpp::ArrayBase el);
		static Dynamic TNew_dyn();
		static ::haxe::macro::TypedExprDef TObjectDecl(cpp::ArrayBase fields);
		static Dynamic TObjectDecl_dyn();
		static ::haxe::macro::TypedExprDef TParenthesis(Dynamic e);
		static Dynamic TParenthesis_dyn();
		static ::haxe::macro::TypedExprDef TReturn(Dynamic e);
		static Dynamic TReturn_dyn();
		static ::haxe::macro::TypedExprDef TSwitch(Dynamic e,cpp::ArrayBase cases,Dynamic edef);
		static Dynamic TSwitch_dyn();
		static ::haxe::macro::TypedExprDef TThrow(Dynamic e);
		static Dynamic TThrow_dyn();
		static ::haxe::macro::TypedExprDef TTry(Dynamic e,cpp::ArrayBase catches);
		static Dynamic TTry_dyn();
		static ::haxe::macro::TypedExprDef TTypeExpr(::haxe::macro::ModuleType m);
		static Dynamic TTypeExpr_dyn();
		static ::haxe::macro::TypedExprDef TUnop(::haxe::macro::Unop op,bool postFix,Dynamic e);
		static Dynamic TUnop_dyn();
		static ::haxe::macro::TypedExprDef TVar(Dynamic v,Dynamic expr);
		static Dynamic TVar_dyn();
		static ::haxe::macro::TypedExprDef TWhile(Dynamic econd,Dynamic e,bool normalWhile);
		static Dynamic TWhile_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_TypedExprDef */ 
