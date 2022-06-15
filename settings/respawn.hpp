//////////////////////////////////////////////////////////////////////////////
// Arma 3 Mission Skeleton by longbow
// version 1.0
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// EGNLISH: This file contain settings of your mission, specific to respawn
//////////////////////////////////////////////////////////////////////////////
// �������: � ���� ����� ��������� ��������� ����� ������, ����������� �
// �����������
//////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Respawn type
// 0 - No respawn
// 1 - As a seagull
// 2 - Respawn where you died
// 3 - Respawn at base
//    requires markers present on map with prefixes:
//      respawn_west
//      respawn_east
//      respawn_guerilla
//      respawn_civilian
//    vehicles respawn markers are prefixed with respawn_vehicle_*
// 4 - Respawn to group, if no AI - to seagull
// 5 - Respawn to side, if no AI - to seagull
//////////////////////////////////////////////////////////////////////////////
// �������: ��� �����������
// 0 - ��� �����������
// 1 - � �����
// 2 - �� ����� ������
// 3 - �� ����
//    ������� ������� �� ����� � ����������:
//      respawn_west
//      respawn_east
//      respawn_guerilla
//      respawn_civilian
//    ��� ����������� ������� ����� ������� � ���������� respawn_vehicle_*
//////////////////////////////////////////////////////////////////////////////
Respawn = 3;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Disable respawn button in main menu
// 0 - disabled
// 1 - enabled, default
//////////////////////////////////////////////////////////////////////////////
// �������: ���������� ������ ����������� � ������� ����
// 0 - ���������
// 1 - ��������, �� ���������
//////////////////////////////////////////////////////////////////////////////
respawnButton = 0;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Respawn delay in seconds
//////////////////////////////////////////////////////////////////////////////
// �������: �������� ����������� � ��������
//////////////////////////////////////////////////////////////////////////////
respawnDelay = 10;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Vehicle respawn delay in seconds
//////////////////////////////////////////////////////////////////////////////
// �������: �������� ����������� ������� � ��������
//////////////////////////////////////////////////////////////////////////////
respawnVehicleDelay = 30;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Display score and respawn timer
// 0 - disabled
// 1 - enabled, by default
//////////////////////////////////////////////////////////////////////////////
// �������: ���������� ���� � ����� �� �����������
// 0 - ���������
// 1 - ��������, �� ���������
//////////////////////////////////////////////////////////////////////////////
respawnDialog = 0;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Respawn player on start after connection. For respawn types 1 and 2
// 1 - respawn player on start, run respawn script
// 0 - do not respawn player on start, run respawn script
// -1 - do not respawn player on start, do not run respawn script
//////////////////////////////////////////////////////////////////////////////
// �������: ����������� ������ �� ������ ����� ������������� � �������. ��� ����� ����������� 1 � 2
// 1 - ��������� ������ �� ������, ��������� ������ �����������
// 0 - �� ���������� ������ �� ������, ��������� ������ �����������
// -1 - �� ���������� ������ �� ������, �� ��������� ������ �����������
//////////////////////////////////////////////////////////////////////////////
respawnOnStart = 0;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Respawn templates from CfgRespawnTemplates
// For side speficif set of templates use RespawnTemplatesSIDE,
// for example RespawnTemplateEast for OPFOR side
//////////////////////////////////////////////////////////////////////////////
// �������: ������� ����������� �� ������ CfgRespawnTemplates
// ��� �������� ������ ��� ������������ ������� ���� ������������
// �������� RespawnTemplatesSIDE, �������� RespawnTemplatesEast ��� ������� �������
//////////////////////////////////////////////////////////////////////////////
respawnTemplates[] = {};