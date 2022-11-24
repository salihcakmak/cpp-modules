## Keywords

- Namespace
- Class
- Member function
- Stdio streams
- Initialization list
- Static
- Const

C++, Bjarne Stroustrup tarafından C programlama dilinin bir uzantısı olarak veya "C with Classes" tarafından oluşturulan
genel amaçlı bir programlama dilidir. Bu modüllerin amacı, sizi Nesne Yönelimli Programlama ile tanıştırmaktır. Bu, C++
yolculuğunuzun başlangıç noktası olacaktır. OOP öğrenmek için birçok dil önerilir. Eski dostunuz C'den türetildiği için
C++'ı seçmeye karar verdik. C++ karmaşık bir dil olduğundan ve işleri basit tutmak istediğimiz için kodunuz C++98
standardına uygun olacaktır.

Modern C++'ın birçok açıdan çok farklı olduğunun farkındayız. Dolayısıyla, yetkin bir C++
geliştiricisi olmak istiyorsanız, 42 common core tamamlandıktan sonra daha ileri gitmek size kalmış.

Adım adım yeni konseptler keşfedeceksiniz. Alıştırmaların karmaşıklığı giderek artacaktır.

## Genel Kurallar

**Derleme | Compiling**

- Kodu derlerken c++ derleyicisini kullanın ve flagleri kullanmayı unutmayın. -Wall -Werror -Wextra
- Derleme komut'u ifadenize -std=c++98 flag'ini eklediğinizde projenizin hala derlenebilir olduğundan emin olun.

**Biçimlendirme ve Adlandırma Kuralları | Formatting and naming conventions**

- Alıştırma dizinleri şu şekilde adlandırılacaktır: ex00, ex01, ... , exn
- Files, classes, functions, member functions ve attributes tanımlamalarını yönergelerde istenilen gibi tanımlayınız.
- Class adlarını UpperCamelCase formatında yazın.
- Class tanımlamalarının bulunduğu dosya isimleri mutlaka sınıf adı ile aynı olmalıdır. Örneğin: ClassName.hpp / ClassName.h, ClassName.cpp veya ClassName.tpp.
- Mesela header dosyanızın içerisinde araba model anlamına gelen CarModels sınıfının tanımı varsa, header dosyanızın adı CarModels.hpp olacaktır.
- Aksi belirtilmedikçe, her çıktı mesajı yeni bir satır karakteri ile sonlandırılmalı ve standart çıktıya gösterilmelidir.
- Hoşçakal Norminette! C++ modüllerinde hiçbir kodlama stili uygulanmaz. İstediğin tarzı seçebilirsin. Ancak, akran değerlendiricilerinizin anlayamayacağı bir kodun, not veremeyecekleri bir kod olduğunu unutmayın.
- Temiz ve okunabilir bir kod yazmak için elinizden gelenin en iyisini yapın.

**İzinler ve Yasaklar | Allowed / Forbidden**

Artık C ile kod yazmıyorsunuz. C++ zamanı! Öyleyse:

- Standart kitaplıktan neredeyse her şeyi kullanmanıza izin verilir. Bu nedenle, zaten bildiklerinize bağlı kalmak yerine, alışık olduğunuz C işlevlerinin mümkün olduğunca C++-ish sürümlerini kullanmak akıllıca olacaktır.
- Ancak, başka bir harici kitaplık kullanamazsınız. Bu, C++ 11 (ve türetilmiş formlar) ve Boost kitaplıklarının yasak olduğu anlamına gelir.
- Şu işlevler de yasaktır: *printf(), *alloc() ve free(). Bunları kullanırsanız, notunuz 0 olur ve bu kadar.
- Aksi açıkça belirtilmediği sürece namespace <ns_name> ve friend keywordlerini kullanmanın yasak olduğunu Unutmayın!! Aksi takdirde notunuz -42 olacaktır.
- STL'yi yalnızca Modül 08'de kullanmanıza izin verilir. Bu şu anlama gelir: modül 8 e gelene kadar Containers(vector/list/map/vs.) ve Algoritmalar (<algorithm> headerını içermesi gereken herhangi birşey) yok. Aksi takdirde notunuz -42 olacaktır.

**Birkaç tasarım gereksinimi | A few design requirements**

- C++'da da bellek sızıntısı oluyor. Bellek ayırdığınızda (new anahtar sözcüğünü kullanarak), bellek sızıntılarından kaçınmalısınız.
- Modül 02'den Modül 08'e kadar, aksi açıkça belirtilmedikçe, sınıflarınız Ortodoks Kanonik Formda (Orthodox Canonical Form) tasarlanmalıdır.
- Header dosyasına yerleştirilen herhangi bir fonksiyon (fonksiyon şablonları hariç), alıştırma için 0 anlamına gelir.
- Header larınızdan her birini diğerlerinden bağımsız olarak kullanabilmelisiniz. Bu nedenle, ihtiyaç duydukları tüm bağımlılıkları içermelidirler.
- Ancak, include guard ekleyerek double inclusion sorunundan kaçınmalısınız. Aksi takdirde notunuz 0 olacaktır.

**Read Me**

- Gerekirse (yani kodunuzu bölmek için) bazı ek dosyalar ekleyebilirsiniz. Bu ödevler bir program tarafından doğrulanmadığından, zorunlu dosyaları teslim ettiğiniz sürece bunu yapmaktan çekinmeyin.
- Bazen bir egzersizin yönergeleri kısa görünür.Ancak örnekler, talimatlarda açıkça yazılmayan gereksinimleri gösterebilir.
- Başlamadan önce her modülü tamamen okuyun! Gerçekten, yap bunu.
- Beynini kullan!!!!!!!

*Çok fazla class implemente etmeniz gerekecek. Favori metin düzenleyicinizde bu kodları yazmıyorsanız bu biraz sıkıcı görünebilir haberiniz olsun.*

*Egzersizleri tamamlamak için size belirli bir miktarda özgürlük verilir. Ancak, zorunlu kurallara uyun ve tembel olmayın. Birçok yararlı bilgiyi kaçırırsınız! Teorik kavramlar hakkında okumaktan çekinmeyin.*

## Exercise 00: Megaphone

***
```
Turn-in directory   : ex00/
Files to turn in    : Makefile, megaphone.cpp
Forbidden functions : None
```

Herkesin uyanık olduğundan emin olmak için aşağıdaki gibi davranan bir program yazın:

```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

```
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
```

```
> $>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```
```
$>
```

*Solve the exercises in a C++ manner.*

## Exercise 01: My Awesome PhoneBook

***
```
Turn-in directory   : ex01/
Files to turn in    : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : None
```

80'lere ve inanılmaz teknolojisine hoş geldiniz! berbat harika telefon defteri yazılımı gibi davranan bir program yazın.

İki class implemente etmeniz gerekir:
- **PhoneBook**
  - contacts dizisine sahiptir.
  - En fazla 8 contacts saklayabilir. Kullanıcı 9. kişiyi eklemeye çalışırsa, en eskisini yenisiyle değiştirin.
  - Dinamik allocation'un yasaklı olduğunu unutmayın.
- **Contact**
  - Contact kelimesi telefon defteri kişisi anlamına gelir.

Kodunuzda, telefon rehberi, PhoneBook sınıfının bir örneği olarak başlatılmalıdır. Contacts(Kontaklar) için de aynı şey. Her biri Contact sınıfının bir örneği olarak başlatılmalıdır. Sınıfları istediğiniz gibi tasarlamakta özgürsünüz fakat sadece sınıf içerisinde kullanılabilecek herhangi birşeyin her zaman private olaması gerektiğini ve class dışında kullanılacak herhangi birşeyin public tanımlanması gerektiğini unutmayın.


Program başlangıcında, telefon defteri boştur ve kullanıcıdan üç komuttan birini girmesi istenir. Program sadece **ADD**, **SEARCH** ve **EXIT'i** kabul eder.

- **ADD:** yeni bir contact kaydet
  - Kullanıcı bu komutu girerse, her seferinde bir field(alan) girdisi olmak üzere kullanıcıdan sırasıyla yeni kişi bilgilerini girmesi istenir. Tüm alanlar doldurulduktan sonra, kişiyi telefon defterine ekleyin.
  - Contact sınıfının fieldları şunlarıdır: ad, soyadı, takma ad, telefon numarası ve en karanlık sır.
    - first name
    - last name
    - nickname
    - phone number
    - darkest secret
  - Kaydedilmiş bir kişinin boş alanları olamaz.
- **SEARCH:** özel bir contact bilgisini görüntüleyin.
  - Kaydedilen kişileri 4 sütunlu bir liste halinde görüntüleyin: dizin, ad, soyadı ve takma ad.
    - index
    - first name
    - last name
    - nickname
  - Her sütun 10 karakter genişliğinde olmalıdır. Bir pipe (çizgi) karakteri ('|') onları ayırır. Metin sağa hizalı olmalıdır. Metin sütundan uzunsa, kısaltılmalı ve görüntülenebilir son karakter bir nokta ('.') ile değiştirilmelidir.
  - Ardından, görüntülenecek içeriğin indexini kullanıcıdan tekrar isteyin. Dizin aralık dışında veya yanlışsa, ilgili bir davranış tanımlayın. Aksi takdirde, her satırda bir alan olacak şekilde kişi bilgilerini görüntüleyin.
- **EXIT**
  - Program kapanır ve kişiler sonsuza kadar kaybolur!
