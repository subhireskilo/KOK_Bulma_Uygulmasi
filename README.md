# 📘 Kök Bulma Uygulaması

Bu uygulama, kullanıcı tarafından girilen bir ikinci dereceden denklemin
(ax² + bx + c) köklerini hesaplar. Girilen katsayılara göre denklemin:

-   İki farklı reel kökü\
-   Tek reel kökü\
-   İmajiner (karmaşık) kökleri

olup olmadığı belirlenir ve sonuç ekrana yazdırılır.

------------------------------------------------------------------------

# 🔢 Kullanım Amacı

İkinci dereceden bir denklem:

    ax^2 + bx + c = 0

Diskriminant formülü:

    Δ = b^2 − 4ac

Bu değere göre köklerin türü belirlenir.

------------------------------------------------------------------------

# 📌 Özellikler

-   Diskiriminant hesaplama\
-   Reel kök bulma\
-   İmajiner kök bulma\
-   Kullanıcıdan değer alma\
-   Sonuçların formatlı şekilde yazdırılması

------------------------------------------------------------------------

# 🧮 Hesaplama Kuralları

### ✔️ 1. Durum: Δ \> 0

İki farklı reel kök vardır:

    x1 = (-b + sqrt(Δ)) / (2a)
    x2 = (-b - sqrt(Δ)) / (2a)

------------------------------------------------------------------------

### ✔️ 2. Durum: Δ = 0

Tek reel kök vardır:

    x = -b / (2a)

------------------------------------------------------------------------

### ✔️ 3. Durum: Δ \< 0

Kökler imajiner (karmaşık) sayı olur:

Gerçek kısmı:

    -b / (2a)

İmajiner kısmı:

    sqrt(-Δ) / (2a)

------------------------------------------------------------------------

# ▶️ Programın Çalışma Şekli

-   Kullanıcıdan a, b, c değerleri alınır.\
-   Diskriminant hesaplanır.\
-   Sonuca göre kökler belirlenir ve ekrana yazdırılır.

------------------------------------------------------------------------

# 📝 Örnek Çalışma

**Girdi:**

    a=1  b=5  c=6

**Çıktı:**

    Diskiriminant=1
    Denklemin birbirinden farkli iki reel kökü vardir
    1.kok=-2.000000  2.kok=-3.000000
