1) Uzupelnij plik main_test.cpp
2) skompiluj test z podlinkowaniem frameworku gest oraz flaga do uzwglednienia coverage'u
   a) g++ -o <nasza_nazwa> -fprofile-arcs -ftest-coverage main_test.cpp Game.h Cell.h Game.cpp -lgtest -lpthread
3) uruchom skompilowany program i zobacz czy testy przechodza
4) wykonaj polecenie 'gcov main_test.cpp' by sprawdzic, przez ktore linie kodu przechodza testy
5) przekonwertuj wyniki do graficznej wersji
 a) przydatne polecenie: lcov --capture --directory . --output-file main_coverage.info
6) przedstaw wyniki w formacie html
 a) przydatne polecenie: genhtml main_coverage.info --output-directory reports
7) otworz plik reports/index.html
8) sprawdz zgodnosc wyniku z oczekiwaniem