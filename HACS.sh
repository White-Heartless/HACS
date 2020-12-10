#!/bin/bash
printf '\e[8;90;230t'
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
echo " Script V1.5          %%        %%                     "
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
rm -Rf ./C*/eva/*
rm -Rf ./C*/eva/.*
./C??Bot.sh $2