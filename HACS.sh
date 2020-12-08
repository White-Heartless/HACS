#!/bin/bash
printf '\e[8;42;113t'
clear
echo "          %%%%%%%%%%%%%           %%%%%%%%%%%          "
echo "      %%%%%           %%%%    %%%%          %%%%%      "
echo "     %%%%%               %%%%%%%              %%%%%    "
echo "    %%% %%%%%%%%%          %%%             %%%%% %%%   "
echo "    %%     %%%%%%           %           %%%%%     %%%  "
echo "    %%        %%%%%%%               %%%%%%         %%  "
echo "    %%           %%%%%%%        %%%%%%%%          %%%  "
echo "     %%             %%%%%%%   %%%%%%             %%%   "
echo "      %%                %%%%%%%%%               %%     "
echo "       %%%             %%%%%%%%%%             %%%      "
echo "         %%%        %%%%%%    %%%%%%        %%%        "
echo "           %%%   %%%%%%         %%%%%%%   %%%          "
echo "             %%%%%%%                 %%%%%%            "
echo " Heartless      %%%                  %%%               "
echo " Automated        %%%              %%%                 "
echo " Correction         %%%          %%%                   "
echo " Script V1.4          %%        %%                     "
echo "                       %%      %%                      "
echo " Made by:              %%      %%                      "
echo " Fabio Facilla         %%       %%                     "
echo "                   %%%%%         %%%%%                 "
echo "             %%%%%%%                %%%%%%%%           "
echo "                %%%%%%%%%      %%%%%%%%%%              "
echo "                       %%%    %%%                      "
echo " Please report any bug  %%%  %%%                       "
echo " you find on Slack        %%%%%                        "
echo "                            %                          "
echo " HACS will now try to update itself..."
read -p 'Press any key to continue or CTRL + C to stop
' -n1 -s
git pull https://github.com/White-Heartless/HACS
cd $1
rm -Rf ./C*/Test/*a.*
rm -Rf ./C*/Test/ft*
./C??Bot.sh $2