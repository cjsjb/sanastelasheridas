\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\time 4/4
		\key d \major

		R1*4  |
%% 5
		fis' 2. e' 4  |
		g' 2. fis' 4  |
		fis' 8 ( e' ) d' 2.  |
		R1  |
		fis' 2. e' 4  |
%% 10
		g' 2. fis' 4  |
		fis' 8 ( e' d' 2. )  |
		r2. b' 8 a'  |
		b' 8 ( a' g' 2 ) g' 8 a'  |
		b' 2 a' 4. g' 8  |
%% 15
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
		a' 2 \times 2/3 { a' 4 g' fis' }  |
		fis' 8 e' ~ e' 2 e' 8 fis'  |
		g' 4 g' fis' e'  |
		fis' 2. ( g' 4
		% warning: overlong bar truncated here |
%% 20
		a' 2 ) r4 b' 8 a'  |
		b' 8 ( a' g' 2 ) g' 8 a'  |
		b' 2 a' 4. g' 8  |
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
		a' 2 \times 2/3 { a' 4 g' fis' }  |
%% 25
		fis' 8 e' ~ e' 2 e' 8 fis'  |
		g' 4 g' fis' e'  |
		d' 1  |
		R1  |
		fis' 2 ~ fis' 8 fis' 4 e' 8  |
%% 30
		g' 2. fis' 4  |
		fis' 8 ( e' d' 2. )  |
		R1  |
		fis' 2. fis' 8 e'  |
		g' 2. fis' 4  |
%% 35
		fis' 8 ( e' d' 2. )  |
		r2 r4 b' 8 a'  |
		b' 8 ( a' g' 2 ) g' 8 a'  |
		b' 2 a' 4. g' 8  |
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
%% 40
		a' 2 \times 2/3 { a' 4 g' fis' }  |
		fis' 8 e' ~ e' 2 e' 8 fis'  |
		g' 4 g' fis' e'  |
		fis' 2. ( g' 4
		% warning: overlong bar truncated here |
		a' 2 ) r4 b' 8 a'  |
%% 45
		b' 8 ( a' g' 2 ) g' 8 a'  |
		b' 2 a' 4. g' 8  |
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
		a' 2 \times 2/3 { a' 4 g' fis' }  |
		fis' 8 e' ~ e' 2 e' 8 fis'  |
%% 50
		g' 4 g' fis' e'  |
		d' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		Yo te a -- mo mu __ cho,
		y "me en" -- tre -- "go a" ti.

		Oh, mi Dios, __
		tú me dis -- te la vi -- da __
		y sa -- nas -- te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só. __

		Oh, mi Dios, __
		tú me dis -- te la vi -- da __
		y sa -- nas -- te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só.

		Tú siem -- pre fuis -- te fiel, __
		yo siem -- pre "te o" -- fen dí. __

		Oh, mi Dios, __
		tú me dis -- te la vi -- da __
		y sa -- nas -- te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só. __

		Oh, mi Dios, __
		tú me dis -- te la vi -- da __
		y sa -- nas -- te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só.
	}
>>
