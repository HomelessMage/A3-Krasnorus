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
// ENGLISH: Enable in-game debug console
// 0 - disabled
// 1 - enabled for hosts/admin/SP
// 2 - enabled for all
//////////////////////////////////////////////////////////////////////////////
// �������: ��������� � ���� ������� �������
// 0 - ���������
// 1 - �������� ��� �������/������ � ��������� ����
// 2 - �������� ��� ����
//////////////////////////////////////////////////////////////////////////////
enableDebugConsole = 1;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Allow functions RPT logging
// 0 - disabled
// 1 - enabled
//////////////////////////////////////////////////////////////////////////////
// �������: ��������� �������� ����������� � RPT ����
// 0 - ���������
// 1 - ��������
//////////////////////////////////////////////////////////////////////////////
allowFunctionsLog = 1;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: 1 to allow recompile functions
//////////////////////////////////////////////////////////////////////////////
// �������: 1 - ��������� ������������������ �������
//////////////////////////////////////////////////////////////////////////////
allowFunctionsRecompile = 0;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: when set to 1 removes all playable units with no real player
//////////////////////////////////////////////////////////////////////////////
// �������: ����� 1, ��������� ��� ����� � ���������� Playable, ���� ��� ��������� ������.
//////////////////////////////////////////////////////////////////////////////
disableAI = 1;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: when 1, joining player is assigned to first available slot in
// multiplayer. When leaving mission, player goes directly to server browser.
//////////////////////////////////////////////////////////////////////////////
// �������: ���� 1, ���������������� ����� ����� ����� �������� �� ������
// ��������� ���� � ������� ����. ��� ���������� - �� ����� ����� ���������
// � ������� ��������.
//////////////////////////////////////////////////////////////////////////////
skipLobby = 0;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: Auto-assigning player to a free slot
// 0 - disabled
// 1 - enabled
//////////////////////////////////////////////////////////////////////////////
// �������: �������������� ������ �� ��������� ����
// 0 - ���������
// 1 - ��������
//////////////////////////////////////////////////////////////////////////////
joinUnassigned = 0;


//////////////////////////////////////////////////////////////////////////////
// ENGLISH: disabling chat/VOIP channels
// After each number two booleans are following, defining
// wether chat or voice are disabled.
// true - enabled
// false - disabled
//   0 - Global
//   1 - Side
//   2 - Command
//   3 - Group
//   4 - Vehicle
//   5 - Direct
//   6 - System
//////////////////////////////////////////////////////////////////////////////
// �������: ���������� ������� ���� � ������
// ����� ������ ������ ���� ��� ���������� ��������,
// ������������ ����������� ������ ������� ��� �������
// true - ��������
// false - ���������
//   0 - �����
//   1 - ����� �������
//   2 - ���������
//   3 - ���������
//   4 - ������������
//   5 - ������
//   6 - ���������
//////////////////////////////////////////////////////////////////////////////
disableChannels[]={{0,false,false},{5,false,false}};