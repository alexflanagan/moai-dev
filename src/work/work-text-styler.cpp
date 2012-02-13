#include <moaicore/moaicore.h>

//----------------------------------------------------------------//
int work_text_styler ( int argc, char **argv ) {
	
	AKUCreateContext ();
	
	MOAITextStyleSet styleSet;
	
	MOAIFont* font = new MOAIFont ();
	
	MOAITextStyle styleDefault;
	styleDefault.SetFont ( font );
	styleDefault.SetPoints ( 12.0f );
	styleSet.SetDefault ( &styleDefault );
	
	MOAITextStyle styleFoo;
	styleFoo.SetFont ( font );
	styleFoo.SetPoints ( 8.0f );
	styleSet.SetStyle ( "foo", &styleFoo );
	
	MOAITextStyle styleBar;
	styleBar.SetFont ( font );
	styleBar.SetPoints ( 16.0f );
	styleSet.SetStyle ( "bar", &styleBar );
	
	MOAITextStyleMap layout;
	layout.Tokenize ( styleSet, "<foo>   this <bar> is a te<b>st  <c>   " );
	
	//MOAIGlyphCache glyphCache;
	//glyphCache.Init ( "arial-rounded.TTF" );
	//glyphCache.AffirmGlyphs ( 12.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.AffirmGlyphs ( 6.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.AffirmGlyphs ( 24.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.AffirmGlyphs ( 8.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.AffirmGlyphs ( 16.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.AffirmGlyphs ( 21.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.AffirmGlyphs ( 18.0f, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 .,:;!?()&/-" );
	//glyphCache.RenderGlyphs ();
	//glyphCache.WritePages ();
	
	return 0;
}
