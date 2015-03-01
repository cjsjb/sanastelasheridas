\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
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
		d' 2. b 4  |
%% 10
		d' 2. d' 4  |
		d' 1  |
		r2 r4 d' 8 d'  |
		d' 4 ~ d' 2 d' 8 d'  |
		cis' 4 ( d' ) e' 4. g' 8  |
%% 15
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
		fis' 4 ( e' ) \times 2/3 { fis' e' d' }  |
		d' 8 b ~ b 2 b 8 b  |
		cis' 4 cis' d' e'  |
		fis' 2. ( e' 4
		% warning: overlong bar truncated here |
%% 20
		d' 2 ) r4 d' 8 d'  |
		d' 4 ~ d' 2 d' 8 d'  |
		cis' 4 ( d' ) e' 4. g' 8  |
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
		fis' 4 ( e' ) \times 2/3 { fis' e' d' }  |
%% 25
		d' 8 b ~ b 2 b 8 b  |
		cis' 4 cis' d' e'  |
		d' 1  |
		R1  |
		fis' 2 ~ fis' 8 fis' 4 e' 8  |
%% 30
		g' 2. fis' 4  |
		fis' 8 ( e' d' 2. )  |
		R1  |
		d' 2. d' 8 b  |
		d' 2. d' 4  |
%% 35
		d' 1  |
		r2 r4 d' 8 d'  |
		d' 4 ~ d' 2 d' 8 d'  |
		cis' 4 ( d' ) e' 4. g' 8  |
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
%% 40
		fis' 4 ( e' ) \times 2/3 { fis' e' d' }  |
		d' 8 b ~ b 2 b 8 b  |
		cis' 4 cis' d' e'  |
		fis' 2. ( e' 4
		% warning: overlong bar truncated here |
		d' 2 ) r4 d' 8 d'  |
%% 45
		d' 4 ~ d' 2 d' 8 d'  |
		cis' 4 ( d' ) e' 4. g' 8  |
		g' 8 fis' ~ fis' 2 fis' 8 g'  |
		fis' 4 ( e' ) \times 2/3 { fis' e' d' }  |
		d' 8 b ~ b 2 b 8 b  |
%% 50
		cis' 4 cis' d' e'  |
		d' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzosoprano" \new Lyrics \lyricmode {
		Yo te a -- mo mu __ cho,
		y "me en" -- tre -- "go a" ti.

		Oh, mi Dios, __
		tú me dis __ te la vi -- da __
		y sa -- nas __ te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só. __

		Oh, mi Dios, __
		tú me dis __ te la vi -- da __
		y sa -- nas __ te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só.

		Tú siem -- pre fuis -- te fiel, __
		yo siem -- pre "te o" -- fen dí.

		Oh, mi Dios, __
		tú me dis __ te la vi -- da __
		y sa -- nas __ te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só. __

		Oh, mi Dios, __
		tú me dis __ te la vi -- da __
		y sa -- nas __ te las he -- ri -- das
		"que el" pe -- ca -- do me cau -- só.
	}
>>
