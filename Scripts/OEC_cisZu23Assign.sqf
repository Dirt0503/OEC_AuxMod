params ["_unit"];

private _guy=createAgent['OEC_Units_CIS_JrSergeant',[0,0,100],[],0,""];
_guy moveInCargo _unit;
_unit setMass 12000;