	ZADANIE - SPRAWDZ PRZYCZYNE BLEDU PROGRAMU ZA POMOCA PLIKU CORE 

1) ustaw mozliwosc generowania pliku core poleceniem 'ulimit -c unlimited'
2) skompiluj plik main.cpp
3) uruchom program - spowoduje to automatyczne wygenerowanie pliku core
4) zbadaj przyczyne bledu poleceniem 'gdb -q <program> <plik_core>'
5) uruchom manual poleceniem 'man 7 signal', zjedz nizej i odczytaj wartosc sygnalu bledu
	oraz komentarz - bedzie on ogolnym opisem przyczyny bledu
7) uruchom program 'SprawdzSie' z argumentem ktory jest odczytana liczba.
	example:  './SprawdzSie 50'
   Odpowie on czy zadanie zostalo poprawnie zrobione.
8) nie bylo punktu 6
