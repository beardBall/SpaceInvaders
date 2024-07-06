clear
[ -e build/SpaceInvaders ] && rm build/SpaceInvaders

cmake -B build
cd build; make;
./SpaceInvaders
cd ..
