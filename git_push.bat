@echo off
cd /d "E:\BootCamp\String"
git add .
git commit -m "Auto save from Dev-C++"
git pull origin main --rebase
git push
pause
