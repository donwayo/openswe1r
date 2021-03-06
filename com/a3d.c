#if 0
DECLARE_INTERFACE_(IA3d4, IUnknown)
{
	// IUnknown Methods.
	STDMETHOD(QueryInterface)				(THIS_ REFIID, LPVOID FAR *) PURE; // 0
	STDMETHOD_(ULONG,AddRef)				(THIS) PURE; // 1
	STDMETHOD_(ULONG,Release)				(THIS) PURE; // 2

	// IA3d Methods.
	STDMETHOD(SetOutputMode)				(THIS_ DWORD, DWORD, DWORD) PURE; // 3
	STDMETHOD(GetOutputMode)				(THIS_ LPDWORD, LPDWORD, LPDWORD) PURE; // 4
	STDMETHOD(SetResourceManagerMode)		(THIS_ DWORD) PURE; // 5
	STDMETHOD(GetResourceManagerMode)		(THIS_ LPDWORD) PURE; // 6
	STDMETHOD(SetHFAbsorbFactor)			(THIS_ FLOAT) PURE; // 7
	STDMETHOD(GetHFAbsorbFactor)			(THIS_ FLOAT *) PURE; // 8

	// IA3d2 Methods.
	STDMETHOD(RegisterVersion)				(THIS_ DWORD) PURE; // 9
	STDMETHOD(GetSoftwareCaps)				(THIS_ LPA3DCAPS_SOFTWARE) PURE; // 10
	STDMETHOD(GetHardwareCaps)				(THIS_ LPA3DCAPS_HARDWARE) PURE; // 11

	// IA3d3 Methods.
	STDMETHOD(Clear)						(THIS) PURE; // 12
	STDMETHOD(Flush)						(THIS) PURE; // 13
	STDMETHOD(Compat)						(THIS_ DWORD, DWORD) PURE; // 14
	STDMETHOD(Init)							(THIS_ LPGUID, DWORD, DWORD) PURE; // 15
	STDMETHOD(IsFeatureAvailable)			(THIS_ DWORD) PURE; // 16
	STDMETHOD(NewSource)					(THIS_ DWORD, LPA3DSOURCE *) PURE; // 17
	STDMETHOD(DuplicateSource)				(THIS_ LPA3DSOURCE, LPA3DSOURCE *) PURE; // 18
	STDMETHOD(SetCooperativeLevel)			(THIS_ HWND, DWORD) PURE; // 19
	STDMETHOD(GetCooperativeLevel)			(THIS_ LPDWORD) PURE; // 20
	STDMETHOD(SetMaxReflectionDelayTime)	(THIS_ A3DVAL) PURE; // 21
	STDMETHOD(GetMaxReflectionDelayTime)	(THIS_ LPA3DVAL) PURE; // 22
	STDMETHOD(SetCoordinateSystem)			(THIS_ DWORD) PURE; // 23
	STDMETHOD(GetCoordinateSystem)			(THIS_ LPDWORD) PURE; // 24
	STDMETHOD(SetOutputGain)				(THIS_ A3DVAL) PURE; // 25
	STDMETHOD(GetOutputGain)				(THIS_ LPA3DVAL) PURE; // 26

	// IA3d4 Methods
	STDMETHOD(SetNumFallbackSources)		(THIS_ DWORD) PURE; // 27
	STDMETHOD(GetNumFallbackSources)		(THIS_ LPDWORD) PURE;	// 28
	STDMETHOD(SetRMPriorityBias)			(THIS_ A3DVAL) PURE; // 29
	STDMETHOD(GetRMPriorityBias)			(THIS_ LPA3DVAL) PURE; // 30
	STDMETHOD(DisableViewer)				(THIS) PURE; // 31
	STDMETHOD(SetUnitsPerMeter) 			(THIS_ A3DVAL) PURE; // 32
	STDMETHOD(GetUnitsPerMeter)				(THIS_ LPA3DVAL) PURE; // 33
	STDMETHOD(SetDopplerScale)				(THIS_ A3DVAL) PURE; // 34
	STDMETHOD(GetDopplerScale)				(THIS_ LPA3DVAL) PURE; // 35
	STDMETHOD(SetDistanceModelScale)		(THIS_ A3DVAL) PURE; // 36
	STDMETHOD(GetDistanceModelScale)		(THIS_ LPA3DVAL) PURE; // 37
	STDMETHOD(SetEq)						(THIS_ A3DVAL) PURE; // 38
	STDMETHOD(GetEq)						(THIS_ LPA3DVAL) PURE; // 39
	STDMETHOD(Shutdown)						(THIS) PURE; // 40
	STDMETHOD(RegisterApp)					(THIS_ REFIID) PURE; // 41
};

DECLARE_INTERFACE_(IA3dListener, IUnknown)
{
	// IUnknown Methods.
	STDMETHOD(QueryInterface)		(THIS_ REFIID, LPVOID FAR *) PURE;
	STDMETHOD_(ULONG,AddRef)		(THIS) PURE;
	STDMETHOD_(ULONG,Release)		(THIS) PURE;

	// IA3dListener Methods.
	STDMETHOD(SetPosition3f)		(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE;
	STDMETHOD(GetPosition3f)		(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE;
	STDMETHOD(SetPosition3fv)		(THIS_ LPA3DVAL) PURE;
	STDMETHOD(GetPosition3fv)		(THIS_ LPA3DVAL) PURE;
	STDMETHOD(SetOrientationAngles3f)	(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE;
	STDMETHOD(GetOrientationAngles3f)	(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE;
	STDMETHOD(SetOrientationAngles3fv)	(THIS_ LPA3DVAL) PURE;
	STDMETHOD(GetOrientationAngles3fv)	(THIS_ LPA3DVAL) PURE;
	STDMETHOD(SetOrientation6f)		(THIS_ A3DVAL, A3DVAL, A3DVAL, A3DVAL, A3DVAL, A3DVAL) PURE;
	STDMETHOD(GetOrientation6f)		(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL, LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE;
	STDMETHOD(SetOrientation6fv)	(THIS_ LPA3DVAL) PURE;
	STDMETHOD(GetOrientation6fv)	(THIS_ LPA3DVAL) PURE;
	STDMETHOD(SetVelocity3f)		(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE;
	STDMETHOD(GetVelocity3f)		(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE;
	STDMETHOD(SetVelocity3fv)		(THIS_ LPA3DVAL) PURE;
	STDMETHOD(GetVelocity3fv)		(THIS_ LPA3DVAL) PURE;
};

DECLARE_INTERFACE_(IA3dSource, IUnknown)
{
	// IUnknown Methods.
	STDMETHOD(QueryInterface)			(THIS_ REFIID, LPVOID FAR *) PURE; // 0
	STDMETHOD_(ULONG,AddRef)			(THIS) PURE; // 1
	STDMETHOD_(ULONG,Release)			(THIS) PURE; // 2

	// IA3dSource Methods.
	STDMETHOD(LoadWaveFile)				(THIS_ LPSTR) PURE; // 3
	STDMETHOD(LoadWaveData)				(THIS_ LPVOID, DWORD) PURE; // 4
	STDMETHOD(AllocateWaveData)			(THIS_ INT) PURE; // 5
	STDMETHOD(FreeWaveData)				(THIS) PURE; // 6
	STDMETHOD(SetWaveFormat)			(THIS_ LPVOID) PURE; // 7
	STDMETHOD(GetWaveFormat)			(THIS_ LPVOID) PURE; // 8
	STDMETHOD(GetWaveSize)				(THIS) PURE; // 9
	STDMETHOD(GetType)					(THIS_ LPDWORD) PURE; // 10
	STDMETHOD(Lock)						(THIS_ DWORD, DWORD, LPVOID *, LPDWORD, LPVOID *, LPDWORD, DWORD) PURE; // 11
	STDMETHOD(Unlock)					(THIS_ LPVOID, DWORD, LPVOID, DWORD) PURE; // 12
	STDMETHOD(Play)						(THIS_ INT) PURE; // 13
	STDMETHOD(Stop)						(THIS) PURE; // 14
	STDMETHOD(Rewind)					(THIS) PURE; // 15
	STDMETHOD(SetWaveTime)				(THIS_ A3DVAL) PURE; // 16
	STDMETHOD(GetWaveTime)				(THIS_ LPA3DVAL) PURE; // 17
	STDMETHOD(SetWavePosition)			(THIS_ DWORD) PURE; // 18
	STDMETHOD(GetWavePosition)			(THIS_ LPDWORD) PURE; // 19
	STDMETHOD(SetPosition3f)			(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE; // 20
	STDMETHOD(GetPosition3f)			(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE; // 21
	STDMETHOD(SetPosition3fv)			(THIS_ LPA3DVAL) PURE; // 22
	STDMETHOD(GetPosition3fv)			(THIS_ LPA3DVAL) PURE; // 23
	STDMETHOD(SetOrientationAngles3f)	(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE; // 24
	STDMETHOD(GetOrientationAngles3f)	(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE; // 25
	STDMETHOD(SetOrientationAngles3fv)	(THIS_ LPA3DVAL) PURE; // 26
	STDMETHOD(GetOrientationAngles3fv)	(THIS_ LPA3DVAL) PURE; // 27
 	STDMETHOD(SetOrientation6f)			(THIS_ A3DVAL, A3DVAL, A3DVAL, A3DVAL, A3DVAL, A3DVAL) PURE; // 28
	STDMETHOD(GetOrientation6f)			(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL, LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE; // 29
	STDMETHOD(SetOrientation6fv)		(THIS_ LPA3DVAL) PURE; // 30
	STDMETHOD(GetOrientation6fv)		(THIS_ LPA3DVAL) PURE; // 31
	STDMETHOD(SetVelocity3f)			(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE; // 32
	STDMETHOD(GetVelocity3f)			(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE; // 33
	STDMETHOD(SetVelocity3fv)			(THIS_ LPA3DVAL) PURE; // 34
	STDMETHOD(GetVelocity3fv)			(THIS_ LPA3DVAL) PURE; // 35
	STDMETHOD(SetCone)					(THIS_ A3DVAL, A3DVAL, A3DVAL) PURE; // 36
	STDMETHOD(GetCone)					(THIS_ LPA3DVAL, LPA3DVAL, LPA3DVAL) PURE; // 37
	STDMETHOD(SetMinMaxDistance)		(THIS_ A3DVAL, A3DVAL, DWORD) PURE; // 38
	STDMETHOD(GetMinMaxDistance)		(THIS_ LPA3DVAL, LPA3DVAL, LPDWORD) PURE; // 39
	STDMETHOD(SetGain)					(THIS_ A3DVAL) PURE; // 40
	STDMETHOD(GetGain)					(THIS_ LPA3DVAL) PURE; // 41
	STDMETHOD(SetPitch)					(THIS_ A3DVAL) PURE; // 42
	STDMETHOD(GetPitch)					(THIS_ LPA3DVAL) PURE; // 43
	STDMETHOD(SetDopplerScale)			(THIS_ A3DVAL) PURE; // 44
	STDMETHOD(GetDopplerScale)			(THIS_ LPA3DVAL) PURE; // 45
	STDMETHOD(SetDistanceModelScale)	(THIS_ A3DVAL) PURE; // 46
	STDMETHOD(GetDistanceModelScale)	(THIS_ LPA3DVAL) PURE; // 47
	STDMETHOD(SetEq)					(THIS_ A3DVAL) PURE; // 48
	STDMETHOD(GetEq)					(THIS_ LPA3DVAL) PURE; // 49
	STDMETHOD(SetPriority)				(THIS_ A3DVAL) PURE; // 50
	STDMETHOD(GetPriority)				(THIS_ LPA3DVAL) PURE; // 51
	STDMETHOD(SetRenderMode)			(THIS_ DWORD) PURE; // 52
	STDMETHOD(GetRenderMode)			(THIS_ LPDWORD) PURE; // 53
	STDMETHOD(GetAudibility)			(THIS_ LPA3DVAL) PURE; // 54
	STDMETHOD(GetOcclusionFactor)		(THIS_ LPA3DVAL) PURE; // 55
    STDMETHOD(GetStatus)				(THIS_ LPDWORD) PURE; // 56
    STDMETHOD(SetPanValues)				(THIS_ DWORD, LPA3DVAL) PURE; // 57
    STDMETHOD(GetPanValues)				(THIS_ DWORD, LPA3DVAL) PURE; // 58
	STDMETHOD(SetWaveEvent)				(THIS_ DWORD, HANDLE) PURE; // 59
	STDMETHOD(ClearWaveEvents)			(THIS) PURE; // 60
	STDMETHOD(SetTransformMode)			(THIS_ DWORD) PURE; // 61
	STDMETHOD(GetTransformMode)			(THIS_ LPDWORD) PURE; // 62
	STDMETHOD(SetReflectionDelayScale)	(THIS_ A3DVAL) PURE; // 63
	STDMETHOD(GetReflectionDelayScale)	(THIS_ LPA3DVAL) PURE; // 64
	STDMETHOD(SetReflectionGainScale)	(THIS_ A3DVAL) PURE; // 65
	STDMETHOD(GetReflectionGainScale)	(THIS_ LPA3DVAL) PURE; // 66
};


#endif
