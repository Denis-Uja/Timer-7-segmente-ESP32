# Timer-7-segmente-ESP32
Proiectul foloseste un microcontroler ESP32 si 2 afisaje led pe 7 segmente (catod comun).
In acest sistem, ESP-ul functioneaza ca un transcodor.

Conexiunile de la displayuri la microcontroler sunt urmatoarele:

Primul display (cifra zecilor):
<br/> a -> pin 1
<br/> b -> pin 3
<br/> c -> pin 25
<br/> d -> pin 33
<br/> e -> pin 32
<br/> f -> pin 22
<br/> g -> pin 23
<br/> DP -> nu trebuie conectat (nu foloseste decimal point)

Al doilea display (cifra unitatilor):
<br/> a -> pin 18
<br/> b -> pin 5
<br/> c -> pin 14
<br/> d -> pin 27
<br/> e -> pin 26
<br/> f -> pin 19
<br/> g -> pin 21
<br/> DP -> nu trebuie conectat

Cei 4 catozi ai afisajelor se conecteaza la unul din pinii GND al ESP-ului
