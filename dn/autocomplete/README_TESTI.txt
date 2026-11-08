APS1 autocomplete - 50 testov
Seme: 20261108
01-10: majhni (20 %)
11-20: stresni/ogromni (20 %)
21-45: mesani (50 %)
46-50: edge cases (10 %)

Vhod testXX.in, pravilni izhod testXX.out; i je 1-based indeks v slovarju.
Omejitve: N,M <= 1e6; |S|,|T| <= 1e5; vsota S in vsota T <= 1e6.

test01 | N=7 M=4 | sumS=41 sumT=9 | Uradni primer iz naloge
test02 | N=1 M=3 | sumS=1 sumT=4 | Ena beseda; natancno ujemanje in manjkajoca predpona
test03 | N=1 M=3 | sumS=1 sumT=4 | Ena beseda; najvecja pomembnost
test04 | N=2 M=4 | sumS=3 sumT=7 | Krajsa beseda je tudi predpona daljse; zmaga krajsa
test05 | N=2 M=4 | sumS=3 sumT=7 | Krajsa beseda je tudi predpona daljse; zmaga daljsa
test06 | N=4 M=7 | sumS=10 sumT=17 | Gnezdene predpone a, aa, aaa, aaaa
test07 | N=6 M=8 | sumS=15 sumT=17 | Predpona ni isto kot poljuben podniz
test08 | N=4 M=7 | sumS=4 sumT=9 | Enocrkovni slovar; manjkajoce predpone
test09 | N=8 M=10 | sumS=42 sumT=52 | Veliko besed z isto predpono
test10 | N=35 M=55 | sumS=140 sumT=195 | Majhne nakljucne poizvedbe
test11 | N=250,000 M=200,000 | sumS=1,000,000 sumT=699,682 | MAX vsote dolzin slovarja: 250k 4-crkovnih besed
test12 | N=200,000 M=200,000 | sumS=1,000,000 sumT=860,024 | MAX slovar: 200k besed z zacetkom a
test13 | N=250,000 M=1,000,000 | sumS=1,000,000 sumT=1,000,000 | MAX vsoti slovarja in poizvedb, 1 milijon poizvedb
test14 | N=250,000 M=200,000 | sumS=1,000,000 sumT=800,000 | MAX slovar; premesan vrstni red besed in eksaktne poizvedbe
test15 | N=200,000 M=200,000 | sumS=1,000,000 sumT=1,000,000 | MAX slovar; 200k petcrkovnih besed in iskanj
test16 | N=100,000 M=100,000 | sumS=1,000,000 sumT=780,296 | MAX slovar; dolga skupna predpona aaaaaa
test17 | N=50,000 M=100,000 | sumS=1,000,000 sumT=1,000,000 | MAX slovar; 20-crkovne besede, globoke predpone
test18 | N=1 M=1,000,000 | sumS=1 sumT=1,000,000 | MAX stevilo poizvedb, ena beseda
test19 | N=10 M=10 | sumS=100,054 sumT=1,000,000 | Besede in poizvedbe blizu 100k znakov
test20 | N=100,000 M=200,000 | sumS=500,000 sumT=1,000,000 | Veliko skoraj pravilnih predpon brez zadetka
test21 | N=32 M=32 | sumS=128 sumT=110 | Majhen mesani primer
test22 | N=128 M=256 | sumS=512 sumT=879 | Premesane besede in obratne pomembnosti
test23 | N=1,000 M=1,000 | sumS=4,000 sumT=4,000 | Sama natancna ujemanja
test24 | N=3,000 M=3,000 | sumS=15,000 sumT=8,962 | Skupna predpona in poizvedbe brez popolnega ujemanja
test25 | N=10,000 M=10,000 | sumS=50,000 sumT=43,056 | Srednje velik, lokalna prekrivanja
test26 | N=12,000 M=15,000 | sumS=720,000 sumT=644,437 | Globoke predpone; veliko crkovnih primerjav
test27 | N=20,000 M=20,000 | sumS=80,000 sumT=80,000 | Pomembnost ni leksikografski vrstni red
test28 | N=40,000 M=20,000 | sumS=400,000 sumT=110,116 | Zelo veliko zacetnih podnizov a
test29 | N=50,000 M=50,000 | sumS=200,000 sumT=174,853 | 50k besed, 50k mesanih poizvedb
test30 | N=60,000 M=100,000 | sumS=240,000 sumT=350,248 | 100k poizvedb, nesortiran slovar
test31 | N=80,000 M=90,000 | sumS=400,000 sumT=387,136 | 80k petcrkovnih besed
test32 | N=99,999 M=100,000 | sumS=399,996 sumT=349,826 | Lihi N, veliko izpisov
test33 | N=100,000 M=100,000 | sumS=500,000 sumT=430,092 | Povezane predpone in skakajoca pomembnost
test34 | N=120,000 M=100,000 | sumS=480,000 sumT=249,537 | Pomembnosti upadajo po vrstnem redu vnosa
test35 | N=160,000 M=100,000 | sumS=640,000 sumT=350,108 | Vecji vhod v premesanem vrstnem redu
test36 | N=200,000 M=100,000 | sumS=800,000 sumT=400,000 | Veliko natancnih ujemanj
test37 | N=190,000 M=150,000 | sumS=950,000 sumT=644,829 | Mocno neuravnotezeni prefixni razponi
test38 | N=120,000 M=200,000 | sumS=480,000 sumT=200,000 | 200k enocrkovnih poizvedb
test39 | N=100,000 M=200,000 | sumS=400,000 sumT=1,000,000 | Dolge neobstojece poizvedbe, skoraj ujemanja
test40 | N=100,000 M=200,000 | sumS=400,000 sumT=501,151 | Stevilne skupne kratke predpone
test41 | N=100,000 M=100,000 | sumS=400,000 sumT=349,748 | Neurejene besede in razlicne pomembnosti
test42 | N=25,000 M=25,000 | sumS=875,000 sumT=633,270 | Dolga skupna predpona; razlicni zadetki
test43 | N=1,000 M=1,000 | sumS=500,500 sumT=500,500 | 1..1000 zaporednih a; beseda je lahko predpona druge
test44 | N=10,000 M=50,000 | sumS=100,000 sumT=50,000 | Ista predpona se ponovi 50k-krat
test45 | N=200,000 M=100,000 | sumS=800,000 sumT=500,000 | Veliko negativnih zahtevnih poizvedb
test46 | N=1 M=1 | sumS=1 sumT=1 | ROB: minimalna N in M, pomembnost 1
test47 | N=1 M=1 | sumS=100,000 sumT=100,000 | ROB: ena 100000-crkovna beseda in poizvedba
test48 | N=1 M=10 | sumS=100,000 sumT=1,000,000 | ROB: maksimalna vsota dolzin poizvedb, dolge bliznje napake
test49 | N=2 M=6 | sumS=100,000 sumT=200,004 | ROB: zelo dolgi predponski besedi in samo ena veljavna daljsa
test50 | N=250,000 M=1,000,000 | sumS=1,000,000 sumT=1,000,000 | ROB: obe vsoti 1e6, max M, ponavljajoce se poizvedbe
