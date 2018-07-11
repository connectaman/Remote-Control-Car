{\rtf1\ansi\ansicpg1252\cocoartf1641\cocoasubrtf100
{\fonttbl\f0\fswiss\fcharset0 Arial-BoldMT;\f1\fswiss\fcharset0 ArialMT;\f2\froman\fcharset0 Times-Roman;
}
{\colortbl;\red255\green255\blue255;\red203\green122\blue33;\red0\green0\blue0;\red34\green77\blue120;
\red253\green180\blue9;\red121\green158\blue51;\red251\green0\blue7;}
{\*\expandedcolortbl;;\cssrgb\c83922\c55294\c16471;\cssrgb\c0\c0\c0;\cssrgb\c17255\c38039\c54510;
\cssrgb\c100000\c75294\c0;\cssrgb\c54510\c67059\c25882;\cssrgb\c100000\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl360\partightenfactor0

\f0\b\fs32 \cf2 \expnd0\expndtw0\kerning0
#include <SoftwareSerial.h>
\f1\b0 \uc0\u8232 
\f0\b SoftwareSerial mySerial(5,6); \cf3 // RX, TX
\f2\b0\fs24 \
\pard\pardeftab720\sl360\partightenfactor0

\f0\b\fs32 \cf4 void\cf3  \cf5 setup\cf3 () 
\f2\b0\fs24 \
\pard\pardeftab720\sl360\partightenfactor0

\f0\b\fs32 \cf3 \{
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf6 mySerial.begin\cf3 (9600);
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 pinMode\cf3 (9,\cf4 OUTPUT\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 pinMode\cf3 (10,\cf4 OUTPUT\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 pinMode\cf3 (11,\cf4 OUTPUT\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 pinMode\cf3 (12,\cf4 OUTPUT\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \}
\f2\b0\fs24 \
\pard\pardeftab720\sl360\partightenfactor0

\f0\b\fs32 \cf4 void\cf3  \cf5 loop\cf3 ()
\f2\b0\fs24 \
\pard\pardeftab720\sl360\partightenfactor0

\f0\b\fs32 \cf3 \{
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf4 char\cf3  ch;
\f2\b0\fs24 \

\f0\b\fs32 \'a0if (\cf6 mySerial.available()\cf3 ) 
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\{
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0ch=\cf6 mySerial.read\cf3 ();
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf2 switch\cf3 (ch)
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\'a0\'a0\{
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0case 'F':
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (9, \cf4 HIGH\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (10,\cf4 LOW\cf3 ); \'a0//M1
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (11,\cf4 HIGH\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (12,\cf4 LOW\cf3 ); // M2\
\cf2 delay\cf3 (100);
\f2\b0\fs24 \

\f0\b\fs32 \'a0break;
\f2\b0\fs24 \

\f0\b\fs32 case 'B':
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf7 digitalWrite\cf3 (9,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf7 digitalWrite\cf3 (10,\cf4 HIGH\cf3 );//M2
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf7 digitalWrite\cf3 (11,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf7 digitalWrite\cf3 (12,\cf4 HIGH\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf2 delay\cf3 (100);
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0break;
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0case 'S':
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf7 digitalWrite\cf3 (9,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\cf7 digitalWrite\cf3 (10,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0 \cf7 digitalWrite\cf3 (11,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (12,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf2 delay\cf3 (100);
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0break;
\f2\b0\fs24 \

\f0\b\fs32 case 'L':
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (9,\cf4 HIGH\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (10,\cf4 LOW\cf3 ); 
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (11,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (12,\cf4 HIGH\cf3 ); 
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf2 delay\cf3 (100); 
\f2\b0\fs24 \

\f0\b\fs32 \'a0break;
\f2\b0\fs24 \

\f0\b\fs32 case 'R':
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (9,\cf4 LOW\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (10,\cf4 HIGH\cf3 ); \'a0
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (11,\cf4 HIGH\cf3 );
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf7 digitalWrite\cf3 (12,\cf4 LOW\cf3 ); 
\f2\b0\fs24 \

\f0\b\fs32 \'a0\cf2 delay\cf3 (100);
\f2\b0\fs24 \

\f0\b\fs32 \'a0break; 
\f2\b0\fs24 \

\f0\b\fs32 \'a0\'a0\} 
\f2\b0\fs24 \

\f0\b\fs32 \'a0\}
\f2\b0\fs24 \

\f0\b\fs32 \}
\f2\b0\fs24 \
\
\pard\pardeftab720\sl360\partightenfactor0

\f1\fs32 \cf3 \uc0\u8232 \u8232 \u8232 \u8232 
\f2\fs24 \
}