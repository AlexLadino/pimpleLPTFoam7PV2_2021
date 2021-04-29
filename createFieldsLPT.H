
      dimensionedScalar rhoInfValue
      (
          transportProperties.lookup("rhoInf")
      );

      dimensionedScalar invrhoInf("invrhoInf",(1.0/rhoInfValue));

      volScalarField rhoInf
      (
          IOobject
          (
              "rho",
              runTime.timeName(),
              mesh,
              IOobject::NO_READ,
              IOobject::NO_WRITE
          ),
          mesh,
          rhoInfValue
      );

      volScalarField mu
      (
          IOobject
          (
              "mu",
              runTime.timeName(),
              mesh,
              IOobject::NO_READ,
              IOobject::NO_WRITE
          ),
          laminarTransport.nu()*rhoInfValue
      );

// ----------------------------------------------------------------------------

      const word kinematicCloudName1
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud1")
      );

      Info<< "Constructing kinematicCloud1 " << kinematicCloudName1 << endl;
      basicKinematicCollidingCloud kinematicCloud1
      (
          kinematicCloudName1,
          rhoInf,
          U,
          mu,
          g
      );

      const word kinematicCloudName2
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud2")
      );

      Info<< "Constructing kinematicCloud2 " << kinematicCloudName2 << endl;
      basicKinematicCollidingCloud kinematicCloud2
      (
          kinematicCloudName2,
          rhoInf,
          U,
          mu,
          g
      );

      const word kinematicCloudName3
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud3")
      );

      Info<< "Constructing kinematicCloud3 " << kinematicCloudName3 << endl;
      basicKinematicCollidingCloud kinematicCloud3
      (
          kinematicCloudName3,
          rhoInf,
          U,
          mu,
          g
      );

      const word kinematicCloudName4
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud4")
      );

      Info<< "Constructing kinematicCloud4 " << kinematicCloudName4 << endl;
      basicKinematicCollidingCloud kinematicCloud4
      (
          kinematicCloudName4,
          rhoInf,
          U,
          mu,
          g
      );

      const word kinematicCloudName5
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud5")
      );

      Info<< "Constructing kinematicCloud5 " << kinematicCloudName5 << endl;
      basicKinematicCollidingCloud kinematicCloud5
      (
          kinematicCloudName5,
          rhoInf,
          U,
          mu,
          g
      );

      const word kinematicCloudName6
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud6")
      );

      Info<< "Constructing kinematicCloud6 " << kinematicCloudName6 << endl;
      basicKinematicCollidingCloud kinematicCloud6
      (
          kinematicCloudName6,
          rhoInf,
          U,
          mu,
          g
      );
      
      const word kinematicCloudName7
      (
          args.optionLookupOrDefault<word>("cloudName", "kinematicCloud7")
      );

      Info<< "Constructing kinematicCloud7 " << kinematicCloudName7 << endl;
      basicKinematicCollidingCloud kinematicCloud7
      (
          kinematicCloudName7,
          rhoInf,
          U,
          mu,
          g
      );
