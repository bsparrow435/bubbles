#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
namespace haxe{
namespace xml{

Void Parser_obj::__construct()
{
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Parser_obj::escapes;

::Xml Parser_obj::parse( ::String str){
	HX_STACK_FRAME("haxe.xml.Parser","parse",0x937905c3,"haxe.xml.Parser.parse","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",63,0xbc28dcd7)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(64)
	::Xml doc = ::Xml_obj::createDocument();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(65)
	::haxe::xml::Parser_obj::doParse(str,(int)0,doc);
	HX_STACK_LINE(66)
	return doc;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

int Parser_obj::doParse( ::String str,hx::Null< int >  __o_p,::Xml parent){
int p = __o_p.Default(0);
	HX_STACK_FRAME("haxe.xml.Parser","doParse",0x2e9a6a38,"haxe.xml.Parser.doParse","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",70,0xbc28dcd7)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(parent,"parent")
{
		HX_STACK_LINE(71)
		::Xml xml = null();		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(72)
		int state = (int)1;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(73)
		int next = (int)1;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(74)
		::String aname = null();		HX_STACK_VAR(aname,"aname");
		HX_STACK_LINE(75)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(76)
		int nsubs = (int)0;		HX_STACK_VAR(nsubs,"nsubs");
		HX_STACK_LINE(77)
		int nbrackets = (int)0;		HX_STACK_VAR(nbrackets,"nbrackets");
		HX_STACK_LINE(78)
		int c = str.cca(p);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(79)
		::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(80)
		while((true)){
			HX_STACK_LINE(80)
			if ((!((!(((c == (int)0))))))){
				HX_STACK_LINE(80)
				break;
			}
			HX_STACK_LINE(82)
			switch( (int)(state)){
				case (int)0: {
					HX_STACK_LINE(85)
					switch( (int)(c)){
						case (int)10: case (int)13: case (int)9: case (int)32: {
						}
						;break;
						default: {
							HX_STACK_LINE(93)
							state = next;
							HX_STACK_LINE(94)
							continue;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(97)
					switch( (int)(c)){
						case (int)60: {
							HX_STACK_LINE(100)
							state = (int)0;
							HX_STACK_LINE(101)
							next = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(103)
							start = p;
							HX_STACK_LINE(104)
							state = (int)13;
							HX_STACK_LINE(105)
							continue;
						}
					}
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(108)
					if (((c == (int)60))){
						HX_STACK_LINE(113)
						::String _g = buf->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(113)
						::String _g1 = str.substr(start,(p - start));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(113)
						::String _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(113)
						::Xml child = ::Xml_obj::createPCData(_g2);		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(115)
						::StringBuf _g3 = ::StringBuf_obj::__new();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(115)
						buf = _g3;
						HX_STACK_LINE(116)
						parent->addChild(child);
						HX_STACK_LINE(117)
						(nsubs)++;
						HX_STACK_LINE(118)
						state = (int)0;
						HX_STACK_LINE(119)
						next = (int)2;
					}
					else{
						HX_STACK_LINE(122)
						if (((c == (int)38))){
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								::String _g4 = str.substr(start,(p - start));		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(123)
								buf->b->push(_g4);
							}
							HX_STACK_LINE(124)
							state = (int)18;
							HX_STACK_LINE(125)
							next = (int)13;
							HX_STACK_LINE(126)
							start = (p + (int)1);
						}
					}
				}
				;break;
				case (int)17: {
					struct _Function_3_1{
						inline static bool Block( ::String &str,int &p){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",130,0xbc28dcd7)
							{
								HX_STACK_LINE(130)
								int _g5 = str.cca((p + (int)1));		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(130)
								return (_g5 == (int)93);
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( ::String &str,int &p){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",130,0xbc28dcd7)
							{
								HX_STACK_LINE(130)
								int _g6 = str.cca((p + (int)2));		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(130)
								return (_g6 == (int)62);
							}
							return null();
						}
					};
					HX_STACK_LINE(130)
					if (((  (((  (((c == (int)93))) ? bool(_Function_3_1::Block(str,p)) : bool(false) ))) ? bool(_Function_3_2::Block(str,p)) : bool(false) ))){
						HX_STACK_LINE(132)
						::String _g7 = str.substr(start,(p - start));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(132)
						::Xml child = ::Xml_obj::createCData(_g7);		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(133)
						parent->addChild(child);
						HX_STACK_LINE(134)
						(nsubs)++;
						HX_STACK_LINE(135)
						hx::AddEq(p,(int)2);
						HX_STACK_LINE(136)
						state = (int)1;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(139)
					switch( (int)(c)){
						case (int)33: {
							HX_STACK_LINE(142)
							int _g8 = str.cca((p + (int)1));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(142)
							if (((_g8 == (int)91))){
								HX_STACK_LINE(144)
								hx::AddEq(p,(int)2);
								HX_STACK_LINE(145)
								::String _g9 = str.substr(p,(int)6).toUpperCase();		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(145)
								if (((_g9 != HX_CSTRING("CDATA[")))){
									HX_STACK_LINE(146)
									HX_STACK_DO_THROW(HX_CSTRING("Expected <![CDATA["));
								}
								HX_STACK_LINE(147)
								hx::AddEq(p,(int)5);
								HX_STACK_LINE(148)
								state = (int)17;
								HX_STACK_LINE(149)
								start = (p + (int)1);
							}
							else{
								HX_STACK_LINE(151)
								int _g10 = str.cca((p + (int)1));		HX_STACK_VAR(_g10,"_g10");
								struct _Function_5_1{
									inline static bool Block( ::String &str,int &p){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",151,0xbc28dcd7)
										{
											HX_STACK_LINE(151)
											int _g11 = str.cca((p + (int)1));		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(151)
											return (_g11 == (int)100);
										}
										return null();
									}
								};
								HX_STACK_LINE(151)
								if (((  ((!(((_g10 == (int)68))))) ? bool(_Function_5_1::Block(str,p)) : bool(true) ))){
									HX_STACK_LINE(153)
									::String _g12 = str.substr((p + (int)2),(int)6).toUpperCase();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(153)
									if (((_g12 != HX_CSTRING("OCTYPE")))){
										HX_STACK_LINE(154)
										HX_STACK_DO_THROW(HX_CSTRING("Expected <!DOCTYPE"));
									}
									HX_STACK_LINE(155)
									hx::AddEq(p,(int)8);
									HX_STACK_LINE(156)
									state = (int)16;
									HX_STACK_LINE(157)
									start = (p + (int)1);
								}
								else{
									HX_STACK_LINE(159)
									int _g13 = str.cca((p + (int)1));		HX_STACK_VAR(_g13,"_g13");
									struct _Function_6_1{
										inline static bool Block( ::String &str,int &p){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",159,0xbc28dcd7)
											{
												HX_STACK_LINE(159)
												int _g14 = str.cca((p + (int)2));		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(159)
												return (_g14 != (int)45);
											}
											return null();
										}
									};
									HX_STACK_LINE(159)
									if (((  ((!(((_g13 != (int)45))))) ? bool(_Function_6_1::Block(str,p)) : bool(true) ))){
										HX_STACK_LINE(160)
										HX_STACK_DO_THROW(HX_CSTRING("Expected <!--"));
									}
									else{
										HX_STACK_LINE(163)
										hx::AddEq(p,(int)2);
										HX_STACK_LINE(164)
										state = (int)15;
										HX_STACK_LINE(165)
										start = (p + (int)1);
									}
								}
							}
						}
						;break;
						case (int)63: {
							HX_STACK_LINE(168)
							state = (int)14;
							HX_STACK_LINE(169)
							start = p;
						}
						;break;
						case (int)47: {
							HX_STACK_LINE(171)
							if (((parent == null()))){
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_CSTRING("Expected node name"));
							}
							HX_STACK_LINE(173)
							start = (p + (int)1);
							HX_STACK_LINE(174)
							state = (int)0;
							HX_STACK_LINE(175)
							next = (int)10;
						}
						;break;
						default: {
							HX_STACK_LINE(177)
							state = (int)3;
							HX_STACK_LINE(178)
							start = p;
							HX_STACK_LINE(179)
							continue;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(182)
					if ((!(((bool((bool((bool((bool((bool((bool((bool((c >= (int)97)) && bool((c <= (int)122)))) || bool((bool((c >= (int)65)) && bool((c <= (int)90)))))) || bool((bool((c >= (int)48)) && bool((c <= (int)57)))))) || bool((c == (int)58)))) || bool((c == (int)46)))) || bool((c == (int)95)))) || bool((c == (int)45))))))){
						HX_STACK_LINE(184)
						if (((p == start))){
							HX_STACK_LINE(185)
							HX_STACK_DO_THROW(HX_CSTRING("Expected node name"));
						}
						HX_STACK_LINE(186)
						::String _g15 = str.substr(start,(p - start));		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(186)
						::Xml _g16 = ::Xml_obj::createElement(_g15);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(186)
						xml = _g16;
						HX_STACK_LINE(187)
						parent->addChild(xml);
						HX_STACK_LINE(188)
						state = (int)0;
						HX_STACK_LINE(189)
						next = (int)4;
						HX_STACK_LINE(190)
						continue;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(193)
					switch( (int)(c)){
						case (int)47: {
							HX_STACK_LINE(196)
							state = (int)11;
							HX_STACK_LINE(197)
							(nsubs)++;
						}
						;break;
						case (int)62: {
							HX_STACK_LINE(199)
							state = (int)9;
							HX_STACK_LINE(200)
							(nsubs)++;
						}
						;break;
						default: {
							HX_STACK_LINE(202)
							state = (int)5;
							HX_STACK_LINE(203)
							start = p;
							HX_STACK_LINE(204)
							continue;
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(207)
					if ((!(((bool((bool((bool((bool((bool((bool((bool((c >= (int)97)) && bool((c <= (int)122)))) || bool((bool((c >= (int)65)) && bool((c <= (int)90)))))) || bool((bool((c >= (int)48)) && bool((c <= (int)57)))))) || bool((c == (int)58)))) || bool((c == (int)46)))) || bool((c == (int)95)))) || bool((c == (int)45))))))){
						HX_STACK_LINE(209)
						::String tmp;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(210)
						if (((start == p))){
							HX_STACK_LINE(211)
							HX_STACK_DO_THROW(HX_CSTRING("Expected attribute name"));
						}
						HX_STACK_LINE(212)
						::String _g17 = str.substr(start,(p - start));		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(212)
						tmp = _g17;
						HX_STACK_LINE(213)
						aname = tmp;
						HX_STACK_LINE(214)
						if ((xml->exists(aname))){
							HX_STACK_LINE(215)
							HX_STACK_DO_THROW(HX_CSTRING("Duplicate attribute"));
						}
						HX_STACK_LINE(216)
						state = (int)0;
						HX_STACK_LINE(217)
						next = (int)6;
						HX_STACK_LINE(218)
						continue;
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(221)
					switch( (int)(c)){
						case (int)61: {
							HX_STACK_LINE(224)
							state = (int)0;
							HX_STACK_LINE(225)
							next = (int)7;
						}
						;break;
						default: {
							HX_STACK_LINE(227)
							HX_STACK_DO_THROW(HX_CSTRING("Expected ="));
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(230)
					switch( (int)(c)){
						case (int)34: case (int)39: {
							HX_STACK_LINE(233)
							state = (int)8;
							HX_STACK_LINE(234)
							start = p;
						}
						;break;
						default: {
							HX_STACK_LINE(236)
							HX_STACK_DO_THROW(HX_CSTRING("Expected \""));
						}
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(239)
					int _g18 = str.cca(start);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(239)
					if (((c == _g18))){
						HX_STACK_LINE(241)
						::String val = str.substr((start + (int)1),((p - start) - (int)1));		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(242)
						xml->set(aname,val);
						HX_STACK_LINE(243)
						state = (int)0;
						HX_STACK_LINE(244)
						next = (int)4;
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(247)
					int _g19 = ::haxe::xml::Parser_obj::doParse(str,p,xml);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(247)
					p = _g19;
					HX_STACK_LINE(248)
					start = p;
					HX_STACK_LINE(249)
					state = (int)1;
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(251)
					switch( (int)(c)){
						case (int)62: {
							HX_STACK_LINE(254)
							state = (int)1;
						}
						;break;
						default: {
							HX_STACK_LINE(256)
							HX_STACK_DO_THROW(HX_CSTRING("Expected >"));
						}
					}
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(259)
					switch( (int)(c)){
						case (int)62: {
							HX_STACK_LINE(262)
							if (((nsubs == (int)0))){
								HX_STACK_LINE(263)
								::Xml _g20 = ::Xml_obj::createPCData(HX_CSTRING(""));		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(263)
								parent->addChild(_g20);
							}
							HX_STACK_LINE(264)
							return p;
						}
						;break;
						default: {
							HX_STACK_LINE(266)
							HX_STACK_DO_THROW(HX_CSTRING("Expected >"));
						}
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(269)
					if ((!(((bool((bool((bool((bool((bool((bool((bool((c >= (int)97)) && bool((c <= (int)122)))) || bool((bool((c >= (int)65)) && bool((c <= (int)90)))))) || bool((bool((c >= (int)48)) && bool((c <= (int)57)))))) || bool((c == (int)58)))) || bool((c == (int)46)))) || bool((c == (int)95)))) || bool((c == (int)45))))))){
						HX_STACK_LINE(271)
						if (((start == p))){
							HX_STACK_LINE(272)
							HX_STACK_DO_THROW(HX_CSTRING("Expected node name"));
						}
						HX_STACK_LINE(274)
						::String v = str.substr(start,(p - start));		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(275)
						::String _g21 = parent->get_nodeName();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(275)
						if (((v != _g21))){
							HX_STACK_LINE(276)
							::String _g22 = parent->get_nodeName();		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(276)
							::String _g23 = (HX_CSTRING("Expected </") + _g22);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(276)
							HX_STACK_DO_THROW((_g23 + HX_CSTRING(">")));
						}
						HX_STACK_LINE(278)
						state = (int)0;
						HX_STACK_LINE(279)
						next = (int)12;
						HX_STACK_LINE(280)
						continue;
					}
				}
				;break;
				case (int)15: {
					struct _Function_3_1{
						inline static bool Block( ::String &str,int &p){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",283,0xbc28dcd7)
							{
								HX_STACK_LINE(283)
								int _g24 = str.cca((p + (int)1));		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(283)
								return (_g24 == (int)45);
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( ::String &str,int &p){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",283,0xbc28dcd7)
							{
								HX_STACK_LINE(283)
								int _g25 = str.cca((p + (int)2));		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(283)
								return (_g25 == (int)62);
							}
							return null();
						}
					};
					HX_STACK_LINE(283)
					if (((  (((  (((c == (int)45))) ? bool(_Function_3_1::Block(str,p)) : bool(false) ))) ? bool(_Function_3_2::Block(str,p)) : bool(false) ))){
						HX_STACK_LINE(285)
						::String _g26 = str.substr(start,(p - start));		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(285)
						::Xml _g27 = ::Xml_obj::createComment(_g26);		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(285)
						parent->addChild(_g27);
						HX_STACK_LINE(286)
						hx::AddEq(p,(int)2);
						HX_STACK_LINE(287)
						state = (int)1;
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(290)
					if (((c == (int)91))){
						HX_STACK_LINE(291)
						(nbrackets)++;
					}
					else{
						HX_STACK_LINE(292)
						if (((c == (int)93))){
							HX_STACK_LINE(293)
							(nbrackets)--;
						}
						else{
							HX_STACK_LINE(294)
							if (((bool((c == (int)62)) && bool((nbrackets == (int)0))))){
								HX_STACK_LINE(296)
								::String _g28 = str.substr(start,(p - start));		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(296)
								::Xml _g29 = ::Xml_obj::createDocType(_g28);		HX_STACK_VAR(_g29,"_g29");
								HX_STACK_LINE(296)
								parent->addChild(_g29);
								HX_STACK_LINE(297)
								state = (int)1;
							}
						}
					}
				}
				;break;
				case (int)14: {
					struct _Function_3_1{
						inline static bool Block( ::String &str,int &p){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",300,0xbc28dcd7)
							{
								HX_STACK_LINE(300)
								int _g30 = str.cca((p + (int)1));		HX_STACK_VAR(_g30,"_g30");
								HX_STACK_LINE(300)
								return (_g30 == (int)62);
							}
							return null();
						}
					};
					HX_STACK_LINE(300)
					if (((  (((c == (int)63))) ? bool(_Function_3_1::Block(str,p)) : bool(false) ))){
						HX_STACK_LINE(302)
						(p)++;
						HX_STACK_LINE(303)
						::String str1 = str.substr((start + (int)1),((p - start) - (int)2));		HX_STACK_VAR(str1,"str1");
						HX_STACK_LINE(304)
						::Xml _g31 = ::Xml_obj::createProcessingInstruction(str1);		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(304)
						parent->addChild(_g31);
						HX_STACK_LINE(305)
						state = (int)1;
					}
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(308)
					if (((c == (int)59))){
						HX_STACK_LINE(310)
						::String s = str.substr(start,(p - start));		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(311)
						int _g32 = s.cca((int)0);		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(311)
						if (((_g32 == (int)35))){
							HX_STACK_LINE(312)
							int _g33 = s.cca((int)1);		HX_STACK_VAR(_g33,"_g33");
							HX_STACK_LINE(312)
							Dynamic i;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(312)
							if (((_g33 == (int)120))){
								HX_STACK_LINE(313)
								::String _g34 = s.substr((int)1,(s.length - (int)1));		HX_STACK_VAR(_g34,"_g34");
								HX_STACK_LINE(313)
								::String _g35 = (HX_CSTRING("0") + _g34);		HX_STACK_VAR(_g35,"_g35");
								HX_STACK_LINE(313)
								i = ::Std_obj::parseInt(_g35);
							}
							else{
								HX_STACK_LINE(314)
								::String _g36 = s.substr((int)1,(s.length - (int)1));		HX_STACK_VAR(_g36,"_g36");
								HX_STACK_LINE(314)
								i = ::Std_obj::parseInt(_g36);
							}
							HX_STACK_LINE(315)
							::String _g37 = ::String::fromCharCode(i);		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(315)
							buf->add(_g37);
						}
						else{
							HX_STACK_LINE(316)
							if ((!(::haxe::xml::Parser_obj::escapes->exists(s)))){
								HX_STACK_LINE(317)
								buf->add(((HX_CSTRING("&") + s) + HX_CSTRING(";")));
							}
							else{
								HX_STACK_LINE(319)
								::String _g38 = ::haxe::xml::Parser_obj::escapes->get(s);		HX_STACK_VAR(_g38,"_g38");
								HX_STACK_LINE(319)
								buf->add(_g38);
							}
						}
						HX_STACK_LINE(320)
						start = (p + (int)1);
						HX_STACK_LINE(321)
						state = next;
					}
				}
				;break;
			}
			HX_STACK_LINE(324)
			int _g39;		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(324)
				int index = ++(p);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(324)
				_g39 = str.cca(index);
			}
			HX_STACK_LINE(324)
			c = _g39;
		}
		HX_STACK_LINE(327)
		if (((state == (int)1))){
			HX_STACK_LINE(329)
			start = p;
			HX_STACK_LINE(330)
			state = (int)13;
		}
		HX_STACK_LINE(333)
		if (((state == (int)13))){
			HX_STACK_LINE(335)
			if (((bool((p != start)) || bool((nsubs == (int)0))))){
				HX_STACK_LINE(336)
				::String _g40 = buf->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(336)
				::String _g41 = str.substr(start,(p - start));		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(336)
				::String _g42 = (_g40 + _g41);		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(336)
				::Xml _g43 = ::Xml_obj::createPCData(_g42);		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(336)
				parent->addChild(_g43);
			}
			HX_STACK_LINE(337)
			return p;
		}
		HX_STACK_LINE(340)
		HX_STACK_DO_THROW(HX_CSTRING("Unexpected end"));
		HX_STACK_LINE(340)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,doParse,return )


Parser_obj::Parser_obj()
{
}

Dynamic Parser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"escapes") ) { return escapes; }
		if (HX_FIELD_EQ(inName,"doParse") ) { return doParse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"escapes") ) { escapes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("escapes"),
	HX_CSTRING("parse"),
	HX_CSTRING("doParse"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::escapes,"escapes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::escapes,"escapes");
};

#endif

Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml.Parser"), hx::TCanCast< Parser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Parser_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Parser.hx",51,0xbc28dcd7)
		{
			HX_STACK_LINE(52)
			::haxe::ds::StringMap h = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(53)
			h->set(HX_CSTRING("lt"),HX_CSTRING("<"));
			HX_STACK_LINE(54)
			h->set(HX_CSTRING("gt"),HX_CSTRING(">"));
			HX_STACK_LINE(55)
			h->set(HX_CSTRING("amp"),HX_CSTRING("&"));
			HX_STACK_LINE(56)
			h->set(HX_CSTRING("quot"),HX_CSTRING("\""));
			HX_STACK_LINE(57)
			h->set(HX_CSTRING("apos"),HX_CSTRING("'"));
			HX_STACK_LINE(58)
			::String _g = ::String::fromCharCode((int)160);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			h->set(HX_CSTRING("nbsp"),_g);
			HX_STACK_LINE(59)
			return h;
		}
		return null();
	}
};
	escapes= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace xml
