<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:18181B,50:B91C1C,100:F59E0B&height=210&section=header&text=Cinema%20Reservation%20System&fontSize=40&fontColor=F8FAFC&fontAlignY=38&desc=Interactive%20C%20Console%20Ticket%20Pricing%20%E2%80%A2%20C%20Sinema%20Bilet%20Otomasyonu&descSize=16&descAlignY=62&animation=fadeIn" alt="Cinema Reservation System Banner" />

<br />

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=600&size=18&duration=2600&pause=900&color=F87171&center=true&vCenter=true&width=780&lines=Interactive+C+Console+Cinema+Ticket+Automation;Step-by-Step+Pricing+%E2%80%A2+Dub%2F3D+Surcharges+%E2%80%A2+Dynamic+Discounts;C+Dili+ile+Etkilesimli+Sinema+Bilet+Fiyatlandirma+Sistemi;Zero+External+Dependencies+%E2%80%A2+Pure+Standard+C" alt="Typing Animation" />

<br />

<p>
  <a href="https://en.cppreference.com/w/c">
    <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white&labelColor=0B0F19" alt="C" />
  </a>
  <a href="https://github.com/yorukokan">
    <img src="https://img.shields.io/badge/GitHub-yorukokan-181717?style=for-the-badge&logo=github&logoColor=white&labelColor=0B0F19" alt="GitHub" />
  </a>
  <a href="https://linkedin.com/in/okanyoruk">
    <img src="https://img.shields.io/badge/LinkedIn-Okan%20Y%C3%B6r%C3%BCk-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white&labelColor=0B0F19" alt="LinkedIn" />
  </a>
  <a href="mailto:okanyoruk.tr@gmail.com">
    <img src="https://img.shields.io/badge/Email-Contact-EA4335?style=for-the-badge&logo=gmail&logoColor=white&labelColor=0B0F19" alt="Email" />
  </a>
</p>

</div>

---

## 🎯 Overview · Proje Özeti

<table>
  <tr>
    <td width="50%" valign="top">
      <h3>🇬🇧 English</h3>
      <p>
        <b>Cinema Reservation Automation System in C</b> is a lightweight, zero-dependency console application written in standard C (<code>stdio.h</code>, <code>stdlib.h</code>). It guides the user through a 7-step interactive ticket purchase flow—covering movie selection, dubbed/subtitled audio, 3D/2D format, session time, student status, age eligibility, and day of the week—while dynamically recalculating the ticket price at every step and printing a final itemized cost breakdown.
      </p>
    </td>
    <td width="50%" valign="top">
      <h3>🇹🇷 Türkçe</h3>
      <p>
        <b>Cinema Reservation Automation System in C</b>, yalnızca standart C kütüphaneleri (<code>stdio.h</code>, <code>stdlib.h</code>) ile geliştirilmiş, harici bağımlılığı olmayan hafif bir konsol uygulamasıdır. Kullanıcıyı film seçimi, dublaj/altyazı, 3D/2D format, seans saati, öğrenci durumu, yaş indirimi ve gün seçimi olmak üzere 7 adımlı etkileşimli bir bilet alma akışından geçirir; her adımda fiyatı dinamik olarak günceller ve sonunda indirim dökümüyle birlikte ödenecek tutarı raporlar.
      </p>
    </td>
  </tr>
</table>

---

## ✨ Key Features · Öne Çıkan Özellikler

<table>
  <tr>
    <td width="50%" valign="top">
      <h4>🎬 Movie Catalog & Selection · Film Kataloğu</h4>
      <b>EN:</b> Presents three classic titles (<i>Pulp Fiction</i>, <i>Fight Club</i>, <i>Scarface</i>) with keyboard shortcuts (<code>p</code>, <code>f</code>, <code>s</code>) and base prices.<br/>
      <b>TR:</b> Üç klasik filmi (<i>Pulp Fiction</i>, <i>Fight Club</i>, <i>Scarface</i>) kısayol tuşları (<code>p</code>, <code>f</code>, <code>s</code>) ve taban fiyatlarıyla listeler.<br/><br/>
      <code>main.c</code>
    </td>
    <td width="50%" valign="top">
      <h4>🔊 Format & Audio Surcharges · Format Farkları</h4>
      <b>EN:</b> Applies real-time percentage surcharges for dubbed audio (<code>+10%</code>) and 3D screenings (<code>+15%</code>), while keeping subtitled and 2D options at base cost.<br/>
      <b>TR:</b> Dublajlı gösterim (<code>+%10</code>) ve 3D format (<code>+%15</code>) için anlık fiyat artışı uygular; altyazılı ve 2D seçeneklerde fiyatı sabit tutar.<br/><br/>
      <code>main.c</code>
    </td>
  </tr>
  <tr>
    <td width="50%" valign="top">
      <h4>🏷️ Multi-Layer Discounts · Çok Katmanlı İndirimler</h4>
      <b>EN:</b> Chains sequential discounts for morning sessions (<code>-5%</code>), students (<code>-20%</code>), visitors under 18 (<code>-50%</code>), and Monday screenings (<code>-30%</code>).<br/>
      <b>TR:</b> Sabah seansı (<code>-%5</code>), öğrenci (<code>-%20</code>), 18 yaş altı (<code>-%50</code>) ve Pazartesi günü (<code>-%30</code>) indirimlerini kademeli olarak uygular.<br/><br/>
      <code>main.c</code>
    </td>
    <td width="50%" valign="top">
      <h4>🧾 Input Guard & Receipt Summary · Doğrulama ve Fiş Özeti</h4>
      <b>EN:</b> Validates menu selections at each step with immediate exit on invalid keys, then outputs the reference price, total discount amount, and final payable total in TL.<br/>
      <b>TR:</b> Her adımda geçersiz tuş girişlerini yakalayıp akışı güvenli şekilde sonlandırır; işlem bitiminde indirimsiz tutarı, toplam indirimi ve ödenecek fiyatı TL cinsinden gösterir.<br/><br/>
      <code>main.c</code>
    </td>
  </tr>
</table>

### 🎟️ Pricing & Discount Matrix · Fiyatlandırma ve İndirim Tablosu

| Step · Adım | Option · Seçenek | Key · Tuş | Price Impact · Fiyat Etkisi |
| :--- | :--- | :---: | :---: |
| **Movie · Film** | Pulp Fiction / Fight Club / Scarface | `p` / `f` / `s` | `80 TL` / `100 TL` / `120 TL` |
| **Audio · Ses** | Dublaj (Dubbed) / Altyazı (Subtitled) | `d` / `a` | `+10%` / `0%` |
| **Format · Format** | 3D / 2D | `u` / `i` | `+15%` / `0%` |
| **Session · Seans** | Sabah / Öğle / Akşam | `1` / `2` / `3` | `-5%` / `0%` / `0%` |
| **Student · Öğrenci** | Evet (Yes) / Hayır (No) | `e` / `h` | `-20%` / `0%` |
| **Age · Yaş** | `< 18` / `>= 18` | `<int>` | `-50%` / `0%` |
| **Day · Gün** | Pazartesi (Monday) / Diğer (Other) | `4` / `5` | `-30%` / `0%` |

---

## 🏗️ Architecture · Mimari

All application state and interactive I/O run inside a single sequential pipeline in `main.c` using standard terminal input/output (`scanf` / `printf`), with no external files or database layer.

```text
+-------------------------------------------------------------------+
|                        main.c (CLI Pipeline)                      |
+-------------------------------------------------------------------+
|                                                                   |
|  [1] Movie Selection        (p / f / s)  ---> Base Ticket Price   |
|           |                                                       |
|           v                                                       |
|  [2] Audio Preference       (d / a)      ---> +10% if Dubbed      |
|           |                                                       |
|           v                                                       |
|  [3] Screening Format       (u / i)      ---> +15% if 3D          |
|           |                                                       |
|           v                                                       |
|  [4] Session Time           (1 / 2 / 3)  ---> -5%  if Morning     |
|           |                                                       |
|           v                                                       |
|  [5] Student Verification   (e / h)      ---> -20% if Student     |
|           |                                                       |
|           v                                                       |
|  [6] Age Check              (yas < 18)   ---> -50% if Under 18    |
|           |                                                       |
|           v                                                       |
|  [7] Day Selection          (4 / 5)      ---> -30% if Monday      |
|           |                                                       |
|           v                                                       |
|  [8] Receipt Summary        ---> Reference Price, Discount, Total |
|                                                                   |
|  * Invalid option at guarded steps -> Print warning & exit early  |
+-------------------------------------------------------------------+
```

---

## 🛠️ Tech Stack · Teknoloji Yığını

<div align="center">

![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=white&labelColor=0D1117)
![GCC](https://img.shields.io/badge/GCC-GNU%20Compiler-2F5D62?style=for-the-badge&logo=gnu&logoColor=white&labelColor=0D1117)
![Standard C Library](https://img.shields.io/badge/Stdlib-stdio.h%20%2B%20stdlib.h-B91C1C?style=for-the-badge&logo=gnubash&logoColor=white&labelColor=0D1117)

</div>

---

## 📂 Project Structure · Proje Yapısı

```text
cinema-reservation-automation-system-in-c/
├── main.c             # Interactive cinema ticket pricing & discount engine (203 lines)
├── .gitattributes     # Automatic LF line-ending normalization
├── .gitignore         # Standard C build artifacts & executable ignore rules
└── README.md          # Bilingual project documentation (EN · TR)
```

---

## 🚀 Getting Started · Kurulum ve Çalıştırma

### 1. Clone the Repository · Repoyu Klonlayın

```bash
git clone https://github.com/yorukokan/cinema-reservation-automation-system-in-c.git
cd cinema-reservation-automation-system-in-c
```

### 2. Compile with GCC · GCC ile Derleyin

```bash
# Linux / macOS
gcc main.c -o cinema

# GCC 14+ (allows bare `return;` statements in `main()`)
gcc -Wno-return-mismatch main.c -o cinema

# Windows (MinGW)
gcc main.c -o cinema.exe
```

### 3. Run the Application · Uygulamayı Çalıştırın

```bash
# Linux / macOS
./cinema

# Windows
cinema.exe
```

---

<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:18181B,50:B91C1C,100:F59E0B&height=100&section=footer" alt="Footer Banner" />

<sub>⚡ <b>Okan Yörük</b> · Cinema Reservation Automation System in C · <a href="https://github.com/yorukokan">github.com/yorukokan</a></sub>

</div>
