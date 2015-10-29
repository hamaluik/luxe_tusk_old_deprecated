#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_tusk_Entity
#include <tusk/Entity.h>
#endif
#ifndef INCLUDED_tusk_Game
#include <tusk/Game.h>
#endif
#ifndef INCLUDED_tusk_Matcher
#include <tusk/Matcher.h>
#endif
#ifndef INCLUDED_tusk_Processor
#include <tusk/Processor.h>
#endif
#ifndef INCLUDED_tusk_Snow
#include <tusk/Snow.h>
#endif
#ifndef INCLUDED_tusk_SplashScreen
#include <tusk/SplashScreen.h>
#endif
#ifndef INCLUDED_tusk_Tusk
#include <tusk/Tusk.h>
#endif
#ifndef INCLUDED_tusk_Window
#include <tusk/Window.h>
#endif
#ifndef INCLUDED_tusk_events_EventRouter
#include <tusk/events/EventRouter.h>
#endif
#ifndef INCLUDED_tusk_events_EventType
#include <tusk/events/EventType.h>
#endif
#ifndef INCLUDED_tusk_modules_Assets
#include <tusk/modules/Assets.h>
#endif
#ifndef INCLUDED_tusk_modules_Sound
#include <tusk/modules/Sound.h>
#endif
namespace tusk{

Void Tusk_obj::__construct(::tusk::Game game)
{
HX_STACK_FRAME("tusk.Tusk","new",0x4da408a0,"tusk.Tusk.new","tusk/Tusk.hx",73,0xa7c05cef)
HX_STACK_THIS(this)
HX_STACK_ARG(game,"game")
{
	HX_STACK_LINE(74)
	super::__construct();
	HX_STACK_LINE(75)
	::tusk::Tusk_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(76)
	::tusk::events::EventRouter tmp = ::tusk::events::EventRouter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->router = tmp;
	HX_STACK_LINE(77)
	this->game = game;
}
;
	return null();
}

//Tusk_obj::~Tusk_obj() { }

Dynamic Tusk_obj::__CreateEmpty() { return  new Tusk_obj; }
hx::ObjectPtr< Tusk_obj > Tusk_obj::__new(::tusk::Game game)
{  hx::ObjectPtr< Tusk_obj > _result_ = new Tusk_obj();
	_result_->__construct(game);
	return _result_;}

Dynamic Tusk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tusk_obj > _result_ = new Tusk_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Tusk_obj::config( Dynamic config){
	HX_STACK_FRAME("tusk.Tusk","config",0xdac2c682,"tusk.Tusk.config","tusk/Tusk.hx",91,0xa7c05cef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(92)
	::tusk::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	::String tmp1 = tmp->get_title();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = tmp1;
	HX_STACK_LINE(93)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(94)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)540;
	HX_STACK_LINE(96)
	Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	return tmp2;
}


Void Tusk_obj::initialize( ){
{
		HX_STACK_FRAME("tusk.Tusk","initialize",0x3efe8110,"tusk.Tusk.initialize","tusk/Tusk.hx",99,0xa7c05cef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->splashScreen = null();
		HX_STACK_LINE(104)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::tusk::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		tmp1->window->onrender = tmp;
		HX_STACK_LINE(107)
		::tusk::Game tmp2 = this->game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		tmp2->___connectRoutes();
		HX_STACK_LINE(110)
		::tusk::events::EventRouter tmp3 = this->router;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tusk/Tusk.hx",110,0xa7c05cef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(110)
		Dynamic tmp4 = _Function_1_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		tmp3->onEvent(::tusk::events::EventType_obj::Start,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tusk_obj,initialize,(void))

Void Tusk_obj::ready( ){
{
		HX_STACK_FRAME("tusk.Tusk","ready",0x52b968a3,"tusk.Tusk.ready","tusk/Tusk.hx",114,0xa7c05cef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		::tusk::modules::Sound tmp = ::tusk::modules::Sound_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::tusk::Tusk_obj::sound = tmp;
		HX_STACK_LINE(119)
		::tusk::modules::Assets tmp1 = ::tusk::modules::Assets_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		::tusk::Tusk_obj::assets = tmp1;
		HX_STACK_LINE(122)
		this->initialize();
	}
return null();
}


Void Tusk_obj::update( Float dt){
{
		HX_STACK_FRAME("tusk.Tusk","update",0x99f5f5c9,"tusk.Tusk.update","tusk/Tusk.hx",131,0xa7c05cef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(132)
		::tusk::SplashScreen tmp = this->splashScreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		if ((tmp1)){
			HX_STACK_LINE(133)
			::tusk::SplashScreen tmp2 = this->splashScreen;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			Float tmp3 = dt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			tmp2->update(tmp3);
		}
		HX_STACK_LINE(135)
		::tusk::events::EventRouter tmp2 = this->router;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( Float &dt){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tusk/Tusk.hx",135,0xa7c05cef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("dt","\x90","\x57","\x00","\x00") , dt,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		Dynamic tmp3 = _Function_1_1::Block(dt);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		tmp2->onEvent(::tusk::events::EventType_obj::Update,tmp3);
	}
return null();
}


Void Tusk_obj::render( ::tusk::Window window){
{
		HX_STACK_FRAME("tusk.Tusk","render",0x1819db16,"tusk.Tusk.render","tusk/Tusk.hx",138,0xa7c05cef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(139)
		::tusk::events::EventRouter tmp = this->router;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tusk/Tusk.hx",139,0xa7c05cef)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(139)
		Dynamic tmp2 = _Function_1_1::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		tmp->onEvent(::tusk::events::EventType_obj::Render,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tusk_obj,render,(void))

::tusk::Tusk Tusk_obj::instance;

::tusk::modules::Sound Tusk_obj::sound;

::tusk::modules::Assets Tusk_obj::assets;

Void Tusk_obj::routeEvent( ::tusk::events::EventType type,Dynamic handler){
{
		HX_STACK_FRAME("tusk.Tusk","routeEvent",0xd0ded991,"tusk.Tusk.routeEvent","tusk/Tusk.hx",81,0xa7c05cef)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(82)
		::tusk::Tusk tmp = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		::tusk::events::EventType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		tmp->router->registerHandler(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tusk_obj,routeEvent,(void))

Void Tusk_obj::unrouteEvent( ::tusk::events::EventType type,Dynamic handler){
{
		HX_STACK_FRAME("tusk.Tusk","unrouteEvent",0xd031792a,"tusk.Tusk.unrouteEvent","tusk/Tusk.hx",86,0xa7c05cef)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(87)
		::tusk::Tusk tmp = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::tusk::events::EventType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		tmp->router->unregisterHandler(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tusk_obj,unrouteEvent,(void))

Void Tusk_obj::addEntity( ::tusk::Entity entity){
{
		HX_STACK_FRAME("tusk.Tusk","addEntity",0xfde83064,"tusk.Tusk.addEntity","tusk/Tusk.hx",146,0xa7c05cef)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(148)
		::tusk::Tusk tmp = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		::tusk::Entity tmp1 = entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		int tmp2 = tmp->game->entities->indexOf(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		bool tmp3 = (tmp2 == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		if ((tmp3)){
			HX_STACK_LINE(149)
			::tusk::Tusk tmp4 = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::tusk::Entity tmp5 = entity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			tmp4->game->entities->push(tmp5);
			HX_STACK_LINE(157)
			Dynamic();
		}
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			::tusk::Tusk tmp4 = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			Array< ::Dynamic > _g1 = tmp4->game->processors;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(154)
			while((true)){
				HX_STACK_LINE(154)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(154)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(154)
				if ((tmp6)){
					HX_STACK_LINE(154)
					break;
				}
				HX_STACK_LINE(154)
				::tusk::Processor tmp7 = _g1->__get(_g).StaticCast< ::tusk::Processor >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				::tusk::Processor processor = tmp7;		HX_STACK_VAR(processor,"processor");
				HX_STACK_LINE(154)
				++(_g);
				HX_STACK_LINE(155)
				::tusk::Entity tmp8 = entity;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(155)
				int tmp9 = processor->entities->indexOf(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(155)
				int tmp10 = (int)-1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(155)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(155)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(155)
				if ((tmp11)){
					HX_STACK_LINE(155)
					::tusk::Entity tmp13 = entity;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(155)
					::tusk::Entity tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(155)
					tmp12 = processor->matcher->matchesEntity(tmp14);
				}
				else{
					HX_STACK_LINE(155)
					tmp12 = false;
				}
				HX_STACK_LINE(155)
				if ((tmp12)){
					HX_STACK_LINE(156)
					::tusk::Entity tmp13 = entity;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(156)
					processor->entities->push(tmp13);
					HX_STACK_LINE(157)
					Dynamic();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tusk_obj,addEntity,(void))

Void Tusk_obj::entityChanged( ::tusk::Entity entity){
{
		HX_STACK_FRAME("tusk.Tusk","entityChanged",0x3140c851,"tusk.Tusk.entityChanged","tusk/Tusk.hx",168,0xa7c05cef)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		::tusk::Tusk tmp = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = tmp->game->processors;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			if ((tmp2)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::tusk::Processor tmp3 = _g1->__get(_g).StaticCast< ::tusk::Processor >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			::tusk::Processor processor = tmp3;		HX_STACK_VAR(processor,"processor");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(169)
			::tusk::Entity tmp4 = entity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			int tmp5 = processor->entities->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			if ((tmp7)){
				HX_STACK_LINE(169)
				::tusk::Entity tmp9 = entity;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(169)
				::tusk::Entity tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(169)
				tmp8 = processor->matcher->matchesEntity(tmp10);
			}
			else{
				HX_STACK_LINE(169)
				tmp8 = false;
			}
			HX_STACK_LINE(169)
			if ((tmp8)){
				HX_STACK_LINE(170)
				::tusk::Entity tmp9 = entity;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				processor->entities->push(tmp9);
				HX_STACK_LINE(157)
				Dynamic();
			}
			else{
				HX_STACK_LINE(173)
				::tusk::Entity tmp9 = entity;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				int tmp10 = processor->entities->indexOf(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(173)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(173)
				if ((tmp12)){
					HX_STACK_LINE(173)
					::tusk::Entity tmp14 = entity;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					::tusk::Entity tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = processor->matcher->matchesEntity(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					tmp13 = !(tmp18);
				}
				else{
					HX_STACK_LINE(173)
					tmp13 = false;
				}
				HX_STACK_LINE(173)
				if ((tmp13)){
					HX_STACK_LINE(174)
					::tusk::Entity tmp14 = entity;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(174)
					processor->entities->remove(tmp14);
					HX_STACK_LINE(157)
					Dynamic();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tusk_obj,entityChanged,(void))

Void Tusk_obj::removeEntity( ::tusk::Entity entity){
{
		HX_STACK_FRAME("tusk.Tusk","removeEntity",0x59d06e47,"tusk.Tusk.removeEntity","tusk/Tusk.hx",184,0xa7c05cef)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			::tusk::Tusk tmp = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			Array< ::Dynamic > _g1 = tmp->game->processors;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			while((true)){
				HX_STACK_LINE(186)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(186)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(186)
				if ((tmp2)){
					HX_STACK_LINE(186)
					break;
				}
				HX_STACK_LINE(186)
				::tusk::Processor tmp3 = _g1->__get(_g).StaticCast< ::tusk::Processor >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(186)
				::tusk::Processor processor = tmp3;		HX_STACK_VAR(processor,"processor");
				HX_STACK_LINE(186)
				++(_g);
				HX_STACK_LINE(187)
				::tusk::Entity tmp4 = entity;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(187)
				bool tmp5 = processor->entities->remove(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(187)
				if ((tmp5)){
					HX_STACK_LINE(157)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(193)
		::tusk::Tusk tmp = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::tusk::Entity tmp1 = entity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		bool tmp2 = tmp->game->entities->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		if ((tmp2)){
			HX_STACK_LINE(157)
			Dynamic();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tusk_obj,removeEntity,(void))

::String Tusk_obj::serialize( ){
	HX_STACK_FRAME("tusk.Tusk","serialize",0x359a4620,"tusk.Tusk.serialize","tusk/Tusk.hx",202,0xa7c05cef)
	HX_STACK_LINE(204)
	::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(205)
	::tusk::Tusk tmp1 = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	s->serialize(tmp1->game->processors);
	HX_STACK_LINE(206)
	::tusk::Tusk tmp2 = ::tusk::Tusk_obj::instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	s->serialize(tmp2->game->entities);
	HX_STACK_LINE(207)
	::String tmp3 = s->toString();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	::String result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(210)
	::String tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tusk_obj,serialize,return )


Tusk_obj::Tusk_obj()
{
}

void Tusk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tusk);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(router,"router");
	HX_MARK_MEMBER_NAME(splashScreen,"splashScreen");
	::tusk::AppFixedTimestep_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tusk_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(router,"router");
	HX_VISIT_MEMBER_NAME(splashScreen,"splashScreen");
	::tusk::AppFixedTimestep_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tusk_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"router") ) { return router; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"splashScreen") ) { return splashScreen; }
	}
	return super::__Field(inName,inCallProp);
}

bool Tusk_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { outValue = assets; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addEntity") ) { outValue = addEntity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"serialize") ) { outValue = serialize_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"routeEvent") ) { outValue = routeEvent_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unrouteEvent") ) { outValue = unrouteEvent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeEntity") ) { outValue = removeEntity_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"entityChanged") ) { outValue = entityChanged_dyn(); return true;  }
	}
	return false;
}

Dynamic Tusk_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::tusk::Game >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"router") ) { router=inValue.Cast< ::tusk::events::EventRouter >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"splashScreen") ) { splashScreen=inValue.Cast< ::tusk::SplashScreen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tusk_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=ioValue.Cast< ::tusk::modules::Sound >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=ioValue.Cast< ::tusk::modules::Assets >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::tusk::Tusk >(); return true; }
	}
	return false;
}

void Tusk_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("router","\xc9","\xda","\xd7","\xcb"));
	outFields->push(HX_HCSTRING("splashScreen","\x33","\xb8","\x83","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::Game*/ ,(int)offsetof(Tusk_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsObject /*::tusk::events::EventRouter*/ ,(int)offsetof(Tusk_obj,router),HX_HCSTRING("router","\xc9","\xda","\xd7","\xcb")},
	{hx::fsObject /*::tusk::SplashScreen*/ ,(int)offsetof(Tusk_obj,splashScreen),HX_HCSTRING("splashScreen","\x33","\xb8","\x83","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::tusk::Tusk*/ ,(void *) &Tusk_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*::tusk::modules::Sound*/ ,(void *) &Tusk_obj::sound,HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsObject /*::tusk::modules::Assets*/ ,(void *) &Tusk_obj::assets,HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("router","\xc9","\xda","\xd7","\xcb"),
	HX_HCSTRING("splashScreen","\x33","\xb8","\x83","\x09"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tusk_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tusk_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Tusk_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(Tusk_obj::assets,"assets");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tusk_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tusk_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Tusk_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(Tusk_obj::assets,"assets");
};

#endif

hx::Class Tusk_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("routeEvent","\xd1","\x89","\x9b","\x7e"),
	HX_HCSTRING("unrouteEvent","\x6a","\xb9","\xaa","\xea"),
	HX_HCSTRING("addEntity","\x24","\x48","\x40","\xbd"),
	HX_HCSTRING("entityChanged","\x11","\xc0","\xdf","\x40"),
	HX_HCSTRING("removeEntity","\x87","\xae","\x49","\x74"),
	HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"),
	::String(null()) };

void Tusk_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Tusk","\xae","\x78","\x13","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tusk_obj::__GetStatic;
	__mClass->mSetStaticField = &Tusk_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tusk_obj >;
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

} // end namespace tusk
