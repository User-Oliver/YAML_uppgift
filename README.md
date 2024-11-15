<h1>Program som kan läsa av YAML filer</h1>


<h2>1. Aktivera WSL i terminalen i visual code och kör detta kommando. För att installera yaml-cpp bibloteket</h2>

sudo apt-get install libyaml-cpp-dev

<h2>2. Clona yaml-cpp repository</h2>

git clone https://github.com/jbeder/yaml-cpp.git

<h2>3. Gå in på yaml-cpp och skapa en directory som heter build. Konfigurera cmake. </h2>

cd yaml-cpp

cmake ..

make

<h2>4. SKapa main och .yaml fil</h2>

touch main.cpp

touch config.yaml

<h2>Öppna filen i visual studio</h2>

code main.cpp

code config.yaml


<h2>4. Kompilera programmet</h2>

g++ main.cpp -o yamlparser -lyaml-cpp

./yamlparser
