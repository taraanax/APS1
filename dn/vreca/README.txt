50 testov za vrečo / multiset
Format: testXX.in = vhod, testXX.out = pravilen IZHOD (vsota odgovorov na poizvedbe).
Razpored: 01-10 majhni, 11-30 veliki, 31-50 robni primeri.
Vrednosti: 1 <= x <= 1000000; |s| <= 1000000; 1 <= N <= 1000000.
Generator uporablja neodvisno referenčno štetje frekvenc s Fenwickovim drevesom.

test01: majhen/naključen (dense), N=1, poizvedb=0, pričakovan izhod=0
test02: majhen/naključen (duplicates), N=2, poizvedb=1, pričakovan izhod=1
test03: majhen/naključen (sparse), N=3, poizvedb=1, pričakovan izhod=0
test04: majhen/naključen (low), N=5, poizvedb=1, pričakovan izhod=1
test05: majhen/naključen (high), N=8, poizvedb=3, pričakovan izhod=0
test06: majhen/naključen (dense), N=12, poizvedb=4, pričakovan izhod=2
test07: majhen/naključen (duplicates), N=20, poizvedb=7, pričakovan izhod=21
test08: majhen/naključen (sparse), N=35, poizvedb=15, pričakovan izhod=26
test09: majhen/naključen (low), N=75, poizvedb=24, pričakovan izhod=173
test10: majhen/naključen (dense), N=150, poizvedb=44, pričakovan izhod=451
test11: velik (dense), N=60000, poizvedb=20444, pričakovan izhod=94319077
test12: velik (duplicates), N=80000, poizvedb=27102, pričakovan izhod=121866621
test13: velik (sparse), N=100000, poizvedb=34174, pričakovan izhod=148217631
test14: velik (low), N=120000, poizvedb=40682, pričakovan izhod=205047079
test15: velik (high), N=150000, poizvedb=50775, pričakovan izhod=320402943
test16: velik (dense), N=200000, poizvedb=68252, pričakovan izhod=1049066166
test17: velik (duplicates), N=250000, poizvedb=84354, pričakovan izhod=1180740502
test18: velik (sparse), N=300000, poizvedb=102102, pričakovan izhod=1336117842
test19: velik (low), N=350000, poizvedb=118842, pričakovan izhod=1722433274
test20: velik (high), N=400000, poizvedb=136548, pričakovan izhod=2302503517
test21: velik (dense), N=450000, poizvedb=153558, pričakovan izhod=5198187766
test22: velik (duplicates), N=500000, poizvedb=169529, pričakovan izhod=4808160978
test23: velik (sparse), N=550000, poizvedb=186810, pričakovan izhod=4432952292
test24: velik (low), N=600000, poizvedb=203847, pričakovan izhod=5083802597
test25: velik (high), N=650000, poizvedb=221368, pričakovan izhod=5965232709
test26: velik (dense), N=700000, poizvedb=238165, pričakovan izhod=12397114712
test27: velik (duplicates), N=750000, poizvedb=255199, pričakovan izhod=10698888914
test28: velik (sparse), N=800000, poizvedb=272658, pričakovan izhod=9572530952
test29: velik (low), N=900000, poizvedb=306590, pričakovan izhod=11500972434
test30: velik (high), N=1000000, poizvedb=340081, pričakovan izhod=14108003323
test31: robni: edina operacija: dodaj, N=1, poizvedb=0, pričakovan izhod=0
test32: robni: edina operacija: odstrani manjkajočega, N=1, poizvedb=0, pričakovan izhod=0
test33: robni: edina operacija: poizvedba prazne vreče, N=1, poizvedb=1, pričakovan izhod=0
test34: robni: odstrani neobstoječega, nato vprašaj, N=3, poizvedb=1, pričakovan izhod=1
test35: robni: večkrat dodano, odstrani samo enega, N=14, poizvedb=1, pričakovan izhod=11
test36: robni: vse pojavitve odstranjene, N=21, poizvedb=1, pričakovan izhod=0
test37: robni: odvečno odstranjevanje prazne vreče, N=54, poizvedb=1, pričakovan izhod=0
test38: robni: obe skrajni vrednosti, N=6, poizvedb=4, pričakovan izhod=6
test39: robni: obrnjene meje intervalov, N=7, poizvedb=4, pričakovan izhod=9
test40: robni: interval ene same vrednosti, N=100, poizvedb=50, pričakovan izhod=2500
test41: robni: velike vrzeli med vrednostmi, N=6, poizvedb=4, pričakovan izhod=4
test42: robni: poizvedbe brez dodajanja, N=1200, poizvedb=1200, pričakovan izhod=0
test43: robni: ponavljajoče odstranjevanje manjkajočega, N=2003, poizvedb=1, pričakovan izhod=0
test44: robni: vse operacije dodajanje istega števila, N=30000, poizvedb=0, pričakovan izhod=0
test45: robni: veliko enakih elementov in več poizvedb, N=60005, poizvedb=4, pričakovan izhod=179999
test46: robni: celoten razpon, veliko različnih števil, N=70003, poizvedb=3, pričakovan izhod=160001
test47: robni: izmenično dodajanje in odstranjevanje, N=100001, poizvedb=1, pričakovan izhod=0
test48: robni: intervali na meji 1 in 1e6, N=30004, poizvedb=4, pričakovan izhod=60000
test49: robni: maksimalen N: 1e6 operacij nad isto vrednostjo, N=1000000, poizvedb=500000, pričakovan izhod=250000
test50: robni: veliko vmesnih poizvedb in ničelnih rezultatov, N=400000, poizvedb=200000, pričakovan izhod=100000
