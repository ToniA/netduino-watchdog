//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:2.0.50727.3053
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace HttpServerSample
{
    
    internal partial class Resource1
    {
        private static System.Resources.ResourceManager manager;
        internal static System.Resources.ResourceManager ResourceManager
        {
            get
            {
                if ((Resource1.manager == null))
                {
                    Resource1.manager = new System.Resources.ResourceManager("HttpServerSample.Resource1", typeof(Resource1).Assembly);
                }
                return Resource1.manager;
            }
        }
        internal static string GetString(Resource1.StringResources id)
        {
            return ((string)(Microsoft.SPOT.ResourceUtility.GetObject(ResourceManager, id)));
        }
        [System.SerializableAttribute()]
        internal enum StringResources : short
        {
            Soap = -30610,
            PostForm = -17464,
            cert_device_microsoft_com = -8968,
        }
    }
}
