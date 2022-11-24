## Keywords

- Namespace
- Qualified Name
- Class
- Member Functions
- Stdio streams
- Inıtıalization List
- Static
- Const
- Include guards
- Attributes
- CamelCase | UpperCamelCase
- Orthodox Canonical Form
- iomanip
- string

---
### Namespace

**namespace** yani isim alanı c++ dilinde global değişken tanımlama durumlarında ortaya çıkabilecek hataları önlemek için geliştirilmiştir.  
**namespace'in** kendisi de bir global değişkendir fakat özelliği kapsama alanı içerisinde {} bulunan tanımlamaları diğer dosyalardan gizlemesidir.  
Tanımlamalar **namespace'in** oluşturduğu kapsama alanında geçerli olur aynı zamanda global erişilebilirlik özelliklerini korurlar fakat bu tanımlamalara erişebilmek için namespace ismini kullanmalıyız.

Namespace tanımlaması aşağıdaki gibidir:
```cpp
namespace namespace_name {
    ...
}
```
namespace alanı içerisinde tanımlanan elemanlara dışarıdan erişmek içi :: çözünürlük işleci kullanılır. Çağırılan elemanları nitelikli yapar ve buna qualified name denir.  
namespace de tanımlanan elemanları nitelendirmeden de doğrudan kullanmanmayı sağlayan tanımlamalar vardır. Bu tanımlama iki türlü olup Aşağıda gösterildiği gibidir.  
```cpp
using namespace namespace_name;

using namespace::field_name;
```
Bu kullanımların farkı ilkinde namespace içerisinde bulunan tüm elamanların tanımlamalarını nitelendirmeden kullanılabilir hale getiriyorken ikincisinde sadece belirtilen elemanın tanımını getirmiştir.
```cpp
namespace product {
    int x;
    int y;
}

using product::x; // Bu bildirim şekli sadece x elemanını nitelendirdi. 

using namespace product; // Burada product namespace'i içerisinde bulunan tüm tanımlamalar nitelendirildi.
```
---
### Class

---
## Introduction

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
$>./megaphone
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


- **Diğer tüm girdiler atılır.**

Bir komut doğru bir şekilde yürütüldüğünde, program bir başkasını bekler. Kullanıcı **EXIT** girdiğinde durur.

Yürütülebilir dosyanıza ilgili bir ad verin.

> http://www.cplusplus.com/reference/string/string/

> http://www.cplusplus.com/reference/iomanip/

## Exercise 02: The Job Of Your Dreams

***
```
Turn-in directory   : ex02/
Files to turn in    : Makefile, Account.cpp, Account.hpp, tests.cpp
Forbidden functions : None
```

*Account.hpp, tests.cpp ve günlük dosyası modülün intranet sayfasından indirilebilir.*

Bugün GlobalBanksters United'daki ilk gününüz. İşe alım testlerini başarıyla geçtikten sonra (bir arkadaşınızın size gösterdiği birkaç Microsoft Office hilesi sayesinde), geliştirme ekibine katıldınız. Ayrıca, Adobe Reader'ı ne kadar hızlı yüklediğinize işverenin şaşırdığını da biliyorsunuz. Bu küçük ekstra fark yarattı ve tüm rakiplerinizi (diğer bir deyişle diğer adayları) yenmenize yardımcı oldu: başardınız!

Her neyse, müdürünüz size biraz iş verdi. İlk göreviniz kayıp bir dosyayı yeniden oluşturmaktır. Bir şeyler ters gitti ve bir kaynak dosya yanlışlıkla silindi. Ne yazık ki meslektaşlarınız Git'in ne olduğunu bilmiyor ve kodu paylaşmak için USB anahtarlarını kullanıyor. Bu noktada, burayı hemen terk etmek mantıklı olacaktır. Ancak kalmaya karar verirsiniz. Meydan okuma kabul edilmiştir!

Diğer geliştiricileriniz size bir sürü dosya veriyor. tests.cpp'nin derlenmesi, eksik dosyanın Account.cpp olduğunu ortaya çıkarır. Şanslısınız, Account.hpp header dosyası kaydedilmiş. Ayrıca bir log(günlük) dosyası var. Belki **Account** sınıfının nasıl uygulandığını(implement edildiğini) anlamak için kullanabilirsiniz.

Account.cpp dosyasını yeniden oluşturmaya başlarsınız. Sadece birkaç dakika içinde birkaç satırlık saf harika C++ kodlarsınız. Birkaç başarısız derlemeden sonra programınız testleri geçer. Çıktısı, günlük dosyasına kaydedilenle mükemmel şekilde eşleşir. (Günlük dosyasına kaydedilen testler işe alınmadan önce çalıştırıldığı için açıkça farklı olacak zaman damgaları dışında.)

Kahretsin, etkileyicisin!

*Yıkıcıların(destructors) çağrılma sırası, derleyicinize/işletim sisteminize bağlı olarak değişebilir. Yani yıkıcılarınız(destructors) ters sırada çağrılabilir.*

*Bu modülü egzersiz 02 yapmadan geçebilirsiniz.*