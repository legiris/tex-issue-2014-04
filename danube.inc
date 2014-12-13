%%%%%%%%%%%%%%%%%% styl pro soubor danube.inc

%%% znaky
%   `` &#65533; dvojitá levá anglická uvozovka (&#65533;) 
%   " &#65533; dvojitá pravá anglická uvozovka (&#65533;) 
%   ` &#65533; jednoduchá levá anglická uvozovka (&#65533;) 
%   ' &#65533; jednoduchá pravá anglická uvozovka (&#65533;) 

% REGISTRY
\voffset -2,54cm
\hoffset -2,54cm

\topmargin 12mm
\oddsidemargin 20mm
\evensidemargin 20mm
\headsep 8mm

\textwidth 125mm
\textheight 182mm

\parindent 0mm
\parskip 0mm

\def\;{\kern.166667em}
\def\,{\kern.25em}  

\newdimen\cola
\newdimen\colb
\newdimen\colc
\newdimen\cold

% FONT
\def\znakc{\'c}

\def\mensi{\@setsize\mensi{8pt}\viipt\@viipt}


% ZAHLAVI
\def\ps@plain{\def\@oddfoot{} \def\@evenfoot{} \def\@evenhead{} \def\@oddhead{}}

\def\ns{\newpage\thispagestyle{empty}~\newpage}

\def\nuluj{\setcounter{section}{0}\setcounter{footnote}{0}\setlength{\tabcolsep}{6pt}\setcounter{equation}{0}}


% UVODNI STRANA -- makra
% autor
\def\autor#1{\begin{center}{\bfseries\large #1}\vspace*{-2mm}\end{center}}

% linka
\def\linka#1{\par\rule[#1]{\textwidth}{1pt}}

%\def\logo{\begin{flushright}\vspace*{4mm}\resizebox{20mm}{!}{\includegraphics{eaco.jpg}}\end{flushright}}

\def\logo@skip{\hphantom{\hskip 10mm}}

%\def\logo{\begin{flushleft}\vspace*{4mm}\hskip 10mm\obr{versita.jpg}{20mm} \hfill \obr{eaco.jpg}{20mm}\logo@skip\end{flushleft}}
\def\logo{\begin{flushleft}\vspace*{5pt}\hskip 10mm\obr{dg.jpg}{20mm} \hfill \obr{eaco.jpg}{20mm}\logo@skip\end{flushleft}}

% BOOK REVIEW STRANA -- makra
\def\autorb#1{\gdef\@autor{#1}}
\def\nadpisb#1{\gdef\@nadpis{#1}}
\def\vyd#1#2{\gdef\@vyd{#1}\gdef\@isbn{#2}}

\def\uvod#1{\parbox[b]{.3\textwidth}{\resizebox{.3\textwidth}{!}{\includegraphics{#1}}}\hfill\parbox[b]{.65\textwidth}{{\large\bfseries\@autor\\[6mm]}{\large\itshape\bfseries\@nadpis\\[8mm]}\@vyd\\[3mm]\@isbn\\[4mm]}\vspace*{8mm}}

\def\uvodd#1{\parbox[b]{.3\textwidth}{\resizebox{.3\textwidth}{!}{\includegraphics{#1}}}\hfill\parbox[b]{.6\textwidth}{{\large\bfseries\@autor\\[6mm]}{\large\itshape\bfseries\@nadpis\\[8mm]}\@vyd\\[3mm]\@isbn\\[4mm]\vspace*{10mm}}\vspace*{8mm}}


% NADPISY
\renewcommand{\section}{\@startsection {section}{1}{\z@}%
                                   {-2ex \@plus -1ex \@minus -.2ex}%
                                   {1.3ex \@plus.2ex}%
                                   {\centering\normalfont\normalsize\bfseries}}

\renewcommand \thesection {\@Roman\c@section.}

\def\nadpis#1{\begin{center}\vspace*{5mm}\large\bfseries\scshape #1\vspace*{2mm}\end{center}}

\def\podnadpis#1{\section{#1}}

% mensi nadpis vlevo
\def\cast#1{{\bfseries #1\\[1mm]}}

% mensi nadpis uprostred
\def\oddil#1{\begin{center}\bfseries #1\end{center}\vspace*{-1mm}}

\def\text#1{\begin{center}\parbox{.8\textwidth}{#1}\end{center}}

% FORMATOVANI TEXTU
% kurziva
\def\fntit#1{\emph{#1}}

% tucne
\def\fntbf#1{{\bfseries#1}}

\newfont{\azb}{wncyr10 at 10pt}


% TABULKY
% zacatek
% @param #1 sloupce
\def\zactab#1{\noindent\begin{tabular}{#1}}
\def\zacltab#1{\noindent\begin{longtable}[l]{#1}}

% konec
\def\kontab{\end{tabular}\renewcommand{\baselinestretch}{1}\renewcommand{\arraystretch}{1}\tabcolsep 6pt\normalfont\normalsize}
\def\konltab{\end{longtable}\renewcommand{\baselinestretch}{1}\renewcommand{\arraystretch}{1}\tabcolsep 6pt\normalfont\normalsize}

% popis
\def\popis#1{\medskip\noindent{\small\bfseries #1}\par\nopagebreak}
\def\popist#1{\medskip\noindent{\small\bfseries #1}\vspace*{1mm}\par\nopagebreak}

% zdroj
\def\zdroj#1{{\par\noindent\itshape\small#1\medskip}}
\def\zdrojt#1{{\vspace*{1mm}\par\noindent\itshape\small#1\medskip}}

% multicolumn -- pocet sl, zarovnani, text
\def\mc#1#2#3{\multicolumn{#1}{#2}{#3}}
%	r - right | r - right vertical line, e - empty, b - both
\def\rr#1{\mc{1}{r|}{#1}}
\def\re#1{\mc{1}{r}{#1}}

\def\ce#1{\mc{1}{c}{#1}}
\def\cb#1{\mc{1}{|c|}{#1}}
\def\cl#1{\mc{1}{|c}{#1}}
\def\crr#1{\mc{1}{c|}{#1}}

% hphantom
\def\0{\hphantom{0}}
\def\m{\hphantom{$-$}}
\def\qm{\hphantom{$-$}}
\def\qc{\hphantom{,}}

% pridani vysky
% @param #1 height
\def\tabht#1{\vrule width 0pt height #1}

% posun textu na radku
% @param #1 rozmer
% @param #2 text
\def\tbox#1#2{\raisebox{#1}[0pt]{#2}}

% bunka jako parbox
% @param #1 rozmer
% @param #2 text
\def\cbox#1#2{\parbox{#1}{\vrule width 0pt height 7.5pt\centering #2\vrule width 0pt depth 3pt}}
\def\lbox#1#2{\parbox{#1}{\vrule width 0pt height 7.5pt \raggedright#2\vrule width 0pt depth 3pt}}

% SEZNAMY
% prostredi itemize
\def\zacseznam{\vspace*{-3\normallineskip}\begin{itemize}%
	\setlength\leftskip{5pt}%
	\setlength\itemsep{-1mm}}
\def\konseznam{\end{itemize}}

% odrazka -- nazev, rozmer
\def\sq#1#2{\resizebox{#2}{!}{\includegraphics{#1}} }

% BOXY
\long\def\smallbox#1{\begin{center}\fbox{\parbox{.95\textwidth}{\leftskip 2mm\rightskip 2mm\small\vspace{1mm} #1\vspace{1mm}}}\end{center}}

% POZNAMKY
\def\pozn#1{\footnote{#1}}

\long\def\@makefntext#1{\leavevmode
    \@makefnmark\nobreak
    \relax\,#1}


% OBRAZKY
\def\figurename{Figure}

%%% nazev.jpg, rozmer
\def\obr#1#2{\noindent\resizebox{#2}{!}{\includegraphics{#1}}}

%%% nazev.jpg
\def\obrazek#1{\includegraphics{#1}}

%%% nazev.jpg, rozmer
\def\obrbez#1#2{\begin{flushleft}\resizebox{#2}{!}{\includegraphics{#1}}\end{flushleft}}

%%% nazev1.jpg, rozmer 1, popis h1, popis b1, nazev2.jpg, rozmer 2, popis h2, popis b2 
\long\def\obrdva#1#2#3#4#5#6#7#8{\begin{flushleft}\parbox[t]{.48\textwidth}{{\small #3}\\[1mm]\resizebox{#2}{!}{\includegraphics{#1}}\\ {\small#4} }\hfill\parbox[t]{.48\textwidth}{{\small #7}\\\resizebox{#6}{!}{\includegraphics{#5}}\\ {\small#8}}\end{flushleft}}

%%% nazev.jpg, rozmer, popis 1, popis 2   
\long\def\obrjedna#1#2#3#4{\begin{flushleft}\parbox[t]{#2}{{\small #3}\\[1mm]\resizebox{#2}{!}{\includegraphics{#1}}\\ {\small#4}}\end{flushleft} }


% OSTATNI
% makro pro koncovky cislovek typu 'st', 'nd', 'th'...
\def\numend#1{\raisebox{.8ex}{\scriptsize #1}}


% PDF
%\def\vlozpdf{\@twosidefalse\includepdf[pages=-,landscape,offset=25mm -25mm]{gachter-tab.pdf}\@twosidetrue}

% soubor.pdf
\def\vlozpdf#1{\@twosidefalse\includepdf[pages=-,landscape,offset=25mm -25mm]{#1}\@twosidetrue}


% PROSTREDI PICTURE
\newdimen\defaultlinewidth \defaultlinewidth=1mm
\def\fatlines{\linethickness{\defaultlinewidth}}


% MATH
\def\dps{\displaystyle}

% vzprimeny font -- abychom nic neprepsali, pouzijeme prefix 'q'
\def\qD{\mathrm{D}}
\def\qK{\mathrm{K}}
\def\qR{\mathrm{R}}
\def\qX{\mathrm{X}}
\def\qZ{\mathrm{Z}}











