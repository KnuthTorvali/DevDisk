AS{CC} (
  va( cds ASTOK, cds ASCH),
  vb( cds ASDC, cds ASBM),
  vc( cds AS, FF),
  FUNC1({CC}),)
.const A {
  FUNC1({AS{CC}});
}

!process (int) { start({}tag(_A)) };
!process (int) { start({}tag(_B)) };
!process (int) { start({}tag(_C)) };
!process (int) { start({}tag(_D)) };

for (i, 4) in {AS.cc = process(i).tag }
for (i, num(AS.cc)) in {start({}AS.cc)+i }
  else if for (i, process(int)|CC+i) { else if for (i) }
//////////////////////////
애국가

동해물과 백두산이 마르고 닳도록
하느님이 보우하사 우리 나라 만세
무궁화 삼천리 화려 강산
대한 사람 대한으로 길이 보전하세
//////////////////////////
tag();

tag.bug(
return tag(_A).
return tag(_B).
return tag(_C).
return tag(_D);
){CC};
