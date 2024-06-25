#include <Arduino.h>
const char index_html[] PROGMEM = R"=====(
    <!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="/pico.min.css">
    <title>Hello, world!</title>
  </head>
  <body>
    <main class="container">
     <div class="grid">
        <div><button id="switch-on">Switch On</button></div>
        <div><button id="switch-off">Switch Off</button></div>
     </div>
    </main>
  </body>
    <script>
        const switchOn = document.getElementById('switch-on');
        const switchOff = document.getElementById('switch-off');

        switchOn.addEventListener('click', () => {
            fetch('/switch-on');
        });

        switchOff.addEventListener('click', () => {
            fetch('/switch-off');
        });
    </script>

</html>
)=====";